# **IDEA**  
  
The idea of this project is to use Arduino to build an interactive system of paired LEDs and switches, where LEDs of different colours are activated and shut down with the press of their corresponding switch. A simple circuit could be built to achieve the same result without Arduino, but since the switches in this project are momentary (i.e. need continuous compression), the system must be intelligent enough to "memorize" the momentary press of a switch.    
  
# **MATERIALS**
  
•	Arduino UNO & Breadboard  
•	LEDs (x3)  
•	Momentary switches (x3)  
•	220Ω resistors (x3)  
•	10kΩ resistors (x3)  
•	Jumper wires  
  
# **PROCESS**  
  
## **Board**  
The switches are connected to digital pins 2, 4 and 6, set as input pins. These pins are connected to ground with 10kΩ resistors. The LEDs are setup next to each switch and connected to pins 3, 5 and 7 respectively, set as output pins. They are connected to ground with 220Ω resistors.   
  
<p align="center" width="100%">
    <img width="50%" src="https://github.com/AlexEcoVis/light-up-the-place/blob/main/board.jpg?raw=true"> 
</p>
  
## **[Code](https://github.com/AlexEcoVis/light-up-the-place/blob/main/Code.ino)**  
The loop includes the following conditions:  
•	**if green switch is pressed**  
&nbsp;  -> reverse green LED state   
•	**else if yellow switch is pressed**  
&nbsp;  -> reverse yellow LED state   
•	**else if red switch is pressed**    
&nbsp;  -> reverse red LED state  
  
Following each switch press, a delay of 0.4 seconds is added to avoid running the loop again on the same press, which would otherwise cause the result to vary. The delay is added after the LED has been turned ON or OFF.  
  
<p align="center" width="100%">
    <img width="50%" src="https://github.com/AlexEcoVis/light-up-the-place/blob/main/Display.gif"> 
</p>
