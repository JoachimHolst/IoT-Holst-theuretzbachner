-   small difficulties at first determining the pin layout and how to
    communicate with LED

-   small difficulties writing image to SD-card (since card reader had
    block enabled)

![](media/image1.png){width="3.1041666666666665in"
height="2.589583333333333in"}

**Example-Code for blinking LED:**

// the setup function runs once when you press reset or power the board

void setup() {

// initialize digital pin LED\_BUILTIN as an output.

pinMode(LED\_BUILTIN, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

digitalWrite(LED\_BUILTIN, HIGH); // turn the LED on (HIGH is the
voltage level)

delay(1000); // wait for a second

digitalWrite(LED\_BUILTIN, LOW); // turn the LED off by making the
voltage LOW

delay(1000); // wait for a second

}

-   establishing WiFi-connection successful

-   ![](media/image2.png){width="4.154861111111111in"
    height="4.951388888888889in"}first step: have LED turn on / off when
    refreshed

-   seconds step: have page refresh with button press with certain IP
    address

-   third step: connect first two steps

-   see sample code (ino.files) in "Arduino-Code" folder
