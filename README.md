# **IDEA**  
  
The idea of this project is to use Arduino to build an interactive system of paired LEDs and switches, where LEDs of different colours are activated and shut down with the press of their corresponding switch. A simple circuit could be built to achieve the same result without Arduino, but since the switches in this project are momentary (i.e. need continuous compression), the system must be intelligent enough to "memorize" the momentary press of a switch.    
  
# **MATERIALS**
  
•	Arduino UNO board  
•	LEDs (x3)  
•	Momentary switches (x3)  
•	220Ω resistors (x3)  
•	10kΩ resistors (x3)  
•	Jumper wires  
  
# **PROCESS**  
  
## **Board**  
The switches are connected to digital pins 2, 4 and 6, set as input pins. These pins are connected to ground with 10kΩ resistors. The LEDs are setup next to each switch and connected to pins 3, 5 and 7 respectively, set as output pins. They are connected to ground with 220Ω resistors.   
  
<p align="center" width="100%">
    <img width="100%" src="https://github.com/AlexEcoVis/light-up-the-place/blob/main/board.jpg?raw=true"> 
</p>
  
## **[Program](https://github.com/AlexEcoVis/light-up-the-place/blob/main/Code.ino)**  
The loop includes the following conditions:  
•	**If green switch is pressed**  
&nbsp;  o	If green LED is on -> switch if off  
&nbsp;  o	If green LED is off -> switch it on  
•	**If yellow switch is pressed**  
&nbsp;  o	If yellow LED is on -> switch if off  
&nbsp;  o	If yellow LED is off -> switch it on  
•	**If red switch is pressed**  
&nbsp;  o	If red LED is on -> switch if off  
&nbsp;  o	If red LED is off -> switch it on  
  
Following each switch press, a delay of 0.4 seconds is added to avoid running the loop again on the same press, which would otherwise cause the result to vary. The delay is added after the LED has been turned ON or OFF.  
  
<p align="center" width="100%">
    <img width="100%" src="https://github.com/AlexEcoVis/light-up-the-place/blob/main/Display.gif"> 
</p>
