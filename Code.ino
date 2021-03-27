
//This sketch runs a program where three LEDs can be turned ON and OFF with the press of 
//switches. Each LED activates/deactivates with the press of a specific switch. In each run, 
//Arduino searches for input activations and activates or deactivates the corresponding output
//pin.

// create variables for input pins
int GreenButton = 2;
int YellowButton = 4;
int RedButton = 6;

// create variables for output pins
int GreenLED = 3;
int YellowLED = 5;
int RedLED = 7;

// delay after button press (following LED activation-deactivation)
// without delay, loop is run several times per press and the result
// will be random

int DELAY = 400; 

// set pin modes (unecessary for inputs)
void setup() {
  
  // default state for output pins is LOW
  pinMode(GreenLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(RedLED, OUTPUT);
  
  // keep built-in LED off 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  
  // if green button is pressed
  if (digitalRead(GreenButton) == HIGH){
    // reverse green LED state
    digitalWrite(GreenLED, abs(digitalRead(GreenLED)-1));
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  // if yellow button is pressed
  else if (digitalRead(YellowButton) == HIGH){
    // reverse yellow LED state
    digitalWrite(YellowLED, abs(digitalRead(YellowLED)-1));
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  
  // if red button is pressed
  else if (digitalRead(RedButton) == HIGH){
    // reverse red LED state
    digitalWrite(RedLED, abs(digitalRead(RedLED)-1));
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  // else do nothing (keeps all LEDs in their state)
    
}
