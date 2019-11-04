#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

#ifndef STASSID
#define HOST "192.168.178.30"
#define STASSID "iotempire-hth"
#define STAPSK "iotempire-iot"
#endif

const char* ssid = STASSID;
const char* password = STAPSK;

const char* host = HOST;

const int buttonPin = D5;
int buttonState = 0;    

void setup(void) {
  pinMode(buttonPin, INPUT);
  
  Serial.begin(115200);
  delay(100);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }
}

void loop(void) {
  buttonState = digitalRead(buttonPin);
  if(buttonState == LOW){    //if LOW, turn LED on
    Serial.print("buttonState: ");
    Serial.println(buttonState);
    Serial.print("Connecting to ");
    Serial.println(host);
    // Use WiFiClient class to create TCP connections
    WiFiClient client;
    const int httpPort = 80;
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      return;
    }    
    //Request to server to activate the led
    client.print(String("GET ") +"/Led"+" HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Connection: close\r\n\r\n");         
    delay(20);
      
    // Read all the lines of the reply from server and print them to Serial Monitor etc
    while(client.available()){
      String line = client.readStringUntil('\r');
      Serial.print(line);
    }
    //Close the Connection
     Serial.println();
     Serial.println("Closing connection");             
  }//End if
}
