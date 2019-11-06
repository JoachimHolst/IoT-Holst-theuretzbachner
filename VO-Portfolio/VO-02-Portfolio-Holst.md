Research iot architecture
Cloud: 	it´s an infrastructure, a network of computers that is available to someone through the internet
Edge:   is about using recources on other computers to compute tasks on your own computer
Fog: it´s comparable to cloud computing except the data get´s progessed locally first and then being uploaded on the cloud. 
Connection, relation 
Fog is necessarily cloud that does something extra, it uses edge computing aswell to progress the data quicker
Edge can be used by cloud aswell if the cloud decides to progress the data with that concept
Examples
Cloud drive, dropbox as databases 
  edge 😊



Low level buses 
I2C is a serial protocol for two-wire interface to connect low-speed devices like microcontrollers, EEPROMs, A/D and D/A converters, I/O interfaces and other similar peripherals in embedded systems. It was invented by Philips and now it is used by almost all major IC manufacturers. Each I2C slave device needs an address – they must still be obtained from NXP (formerly Philips semiconductors).

I2C
Uses master slave 
Speed depeding on length 10 – 400 kbit up to 5MHz on high speed 
Short distance, inter board comminucation
Example LCD/ OLED
https://i2c.info/
SPI
Serial Peripheral Interface - is a synchronous serial communication interface specification used for short-distance communication

developed by Motorola
full duplex mode using a master-slave
Multiple slave-devices
Short distance 3m
Signals: 
SCLK: Serial Clock (output from master)
MOSI: Master Output Slave Input, or Master Out Slave In (data output from master)
MISO: Master Input Slave Output, or Master In Slave Out (data output from slave)
SS: Slave Select (often active low, output from master)
Clock frequency
SPI clock speed is dependent of the devices on the bus
From 1.5MHZ to 48MHz
Beispiele:
Embeded System
Sensoren Connection
SD Karte
oneWire
Low data rate (16,3 kbs), similar to I2C, Master / Slave(s), 100 - 300m, 
Master sends pulses
15us < == 1
60us > == 0
OneWire requires a single 4.7K pullup resistor, connected between the pin and +5 volts. Then just connect each 1-wire device to the pin and ground. Some 1-wire devices can also connect to power, or get their power from the signal wire. 

RS232
Any typical EndToEnd Connection over Cable ?!

Examples
- CAN-Bus
- Telephone
- Other modern Bussystems

Data
- Data is transmitted over words.
- 1 Word is 5 to 9 Bits.
- Encoding is ASCII

Speed
|  Datenrate (kBd) |  Länge(m)  |
|---|---|
| 2,4            |900           |
| 4,8   | 300 |
|  9,6  |  152 | 
| 19,2  |  15 |  
| 57,6  | 5  |  
| 115,2 |< 2|

Nice to know
- It is a voltage interface the voltage lasts from -3V to -15V as logical 1
and from +3V to 15V as logical 0

RS485: 
Speed: up to 10 Mbit/s
Wire length: up to 1,200 m (at lower speed)
As a rule of thumb, the speed in bit/s multiplied by the length in metres should not exceed 10^8.
--> 50-meter cable should not signal faster than 2 Mbit/s
Wiring: 2-wire system, oder Full Duplex 2x Twisted Pair
Programming: RS485 is more difficult, since you are sending and receiving on the same two wires, you need to enable and disable the transmitter at the correct time so that you may perform proper communications.
Turn on/off transmitter/receiver
Examples:
Connect Arduinos, Automatisierungstechnik, Building automation
 
