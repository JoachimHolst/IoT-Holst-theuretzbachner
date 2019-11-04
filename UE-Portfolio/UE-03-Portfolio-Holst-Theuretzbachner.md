**UE-Portfolio 04.11.2019**

**Finished IFTTT Webhook to Telegram**

had trouble at first getting the network started, turned out the
raspberry pi wasn't at fault, but not all the connection in the room we
were in have been properly installed

API-key for IFTTT in our case:
"jR0TCgjpoLttDrVfabg8l1LOQjatKXaKL\_dWtq4psLp"

Name of trigger event: "button\_pressed"

bit of trouble with the request and putting in the right order, link to
trigger ultimately looks like this (includes the trigger and the key):
http://maker.ifttt.com/trigger/button\_pressed/with/key/jR0TCgjpoLttDrVfabg8l1LOQjatKXaKL\_dWtq4psLp

this url triggers an individual event with the name "button\_pressed"
and does whatever was specified in that case; here it sends a message to
a telegram chat

telegram needs to be connected to IFTTT for this to work

!\[pin schema wemos
mini\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/ifttt-applet.png)

Successfully sent message to telegram chat via IFTTT webhooks looks like
this:

!\[screenshot of telegram chat with sent
messages\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/ifttt-telegram.png)

this includes the name of the trigger event, as well as date and time to
check if the button press is sent correctly

!\[serial monitor showing connection and button press\](
https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/ifttt-telegram-serial-monitor.png)

**Reflexion:**

found this exercise a lot easier than the previous one (button press
turns LED on / off on another Arduino) because a lot more familiar with
Arduino IDE already

hardest part of all was actually to get the button to work, and since it
already did now, the http request stuff wasn't that difficult

also found it easier to find proper documentation / tutorials online,
simply because there was less to choose from

WiFi in this particular room continues to be awful

**Finished LCD Display**

trouble with connecting the right pins: GND was fine, Voltage was not
clear -- had to ask, is in fact 5V, two other pins default to D1 and D2;
looked it up in iotempire git-repository

had to download IC2 library which is called differently than is stated
on github, but it was fine in the end

<https://github.com/iotempire/iotempower/blob/master/lib/node_types/nodemcu/src/pins.h>

!\[picture of working LCD display saying "hello
world"\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/LCD1.png)

!\[connected pins on
display\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/LCD2.png)

!\[connected pin on
esp8266\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/LCD3.png)

**Reflexion:**

ultimately pretty easy, once the pins were sorted out

**MQTT.fx**

asked for advice
