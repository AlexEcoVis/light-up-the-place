
//This sketch runs a system where three LEDs can be turned ON and OFF with the press of 
//switches. Each LED activates/deactivates with the press of a specific switch. In each run, 
//Arduino reads the state of the pin (ON or OFF) and keeps it as such, if no switch is pressed.

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
    if (digitalRead(GreenLED) == HIGH){ // if green led is on
      digitalWrite(GreenLED, LOW); // shut green led off
    }
    
    else if (digitalRead(GreenLED) == LOW){ // if green led is off
      digitalWrite(GreenLED, HIGH);
    }
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  // if yellow button is pressed
  else if (digitalRead(YellowButton) == HIGH){
    if (digitalRead(YellowLED) == HIGH){ // if yellow led is on
      digitalWrite(YellowLED, LOW); // shut yellow led off
    }
    
    else if (digitalRead(YellowLED) == LOW){ // if yellow led is off
      digitalWrite(YellowLED, HIGH); 
    }
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  
  // if red button is pressed
  else if (digitalRead(RedButton) == HIGH){
    if (digitalRead(RedLED) == HIGH){ // if red led is on
      digitalWrite(RedLED, LOW); // shut red led off
    }
    
    else if (digitalRead(RedLED) == LOW){ // if red led is off
      digitalWrite(RedLED, HIGH);
    }
    delay(DELAY); //delay to avoid running loop multiple times per press
  }
  
  // else do nothing (keeps all LEDs in their state)
    
}
