This is the code for setting the channel of the HC-12 antenna on the MARS boards.

Open the serial monitor and type “AT”. If the module returns “OK”, the command mode is working.

## Changing the communication channel
Type “AT+Cxxx”.
The value can be a number from 001 to 127.
Every number is a 400KHz step. The working frequency of channel 100 is 473.0MHz.
Example: type “AT+C021”. The module returns “OK+C021”.
The module is now set to a working frequency of 441.4MHx
Note that both sending and receiving modules need to have the same frequency to communicate.

## Changing the working mode of the module.
This can be FU1, FU2, FU4 or FU4 (FU4 at a baud rate of 1200 sets the chip to transmit up to 1800 meter in open air). See documentation for a full explanation.
Example: Type “AT+FU4”. The module returns “OK+FU4”.
## Obtain all parameters from the module.
Type “AT+RX”.
The module should return something like this:
“OK+FU3
OK+B9600
OK+C001
OK+RP:+20dBm”.

References:
https://www.instructables.com/Long-Range-18km-Arduino-to-Arduino-Wireless-Commun/
https://www.allaboutcircuits.com/projects/understanding-and-implementing-the-hc-12-wireless-transceiver-module/
Data sheet: https://www.elecrow.com/download/HC-12.pdf
