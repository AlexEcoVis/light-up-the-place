**IDEA**  
  
The idea of this project is to build a system of paired LEDs and switches, where LEDs of different colours are activated and shut down with the press of their corresponding switch.  
  
MATERIALS 
  
•	LEDs (3)  
•	Switches (3)  
•	220Ω resistors (3)  
•	10kΩ resistors (3)  
•	Jumper wires  
  
PROCESS  
  
Board  
The switches are connected to digital pins 2, 4 and 6, set as input pins. These pins are connected to ground with 10kΩ resistors. The LEDs are setup next to each switch and connected to pins 3, 5 and 7 respectively, set as output pins. They are connected to ground with 220Ω resistors.  
   
Program  
The loop includes the following conditions:  
•	If green switch is pressed  
&nbsp;  o	If green LED is on -> switch if off  
&nbsp;  o	If green LED is off -> switch it on  
•	If yellow switch is pressed  
&nbsp;  o	If yellow LED is on -> switch if off  
&nbsp;  o	If yellow LED is off -> switch it on  
•	If red switch is pressed  
&nbsp;  o	If red LED is on -> switch if off  
&nbsp;  o	If red LED is off -> switch it on  
•	else (if nothing is pressed)  
&nbsp;  o	do nothing (will keep all LEDs in their state)  
  
Following each switch press, a delay of 400ms is added to avoid running the loop again on the same press, which would otherwise cause the result to vary. The delay is added after the LED has been turned ON or OFF.  

