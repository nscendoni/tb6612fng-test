//Info diver
//http://papcodientu.com/store/motor-driver-tb6612.html
//Info PWM
//https://www.arduino.cc/en/Tutorial/PWM

//Set board to: arduino pro or pro mini 5V

int pwm = 9;
int ain1 = 13;
int ain2 = 12;
int stb = 10;
//Connect +5 to STB and VCC
//Connect VM to battery
//Connect all the ground


void setup() {                
  // initialize the digital pin as an output.
  pinMode(pwm, OUTPUT);     
  pinMode(ain1, OUTPUT);     
  pinMode(ain2, OUTPUT);     
  pinMode(stb, OUTPUT);     
  digitalWrite(stb, HIGH);  
}

void loop() {
  
  //Stop
  digitalWrite(pwm, HIGH);   // set the LED on
  digitalWrite(ain1, HIGH);   // set the LED on
  digitalWrite(ain2, HIGH);   // set the LED on
  delay(2000);
  
  //Forward
  digitalWrite(pwm, HIGH);   // set the LED on
  digitalWrite(ain1, LOW);   // set the LED on
  digitalWrite(ain2, HIGH);   // set the LED on
  delay(2000);

  //Back
  digitalWrite(pwm, HIGH);   // set the LED on
  digitalWrite(ain1, HIGH);   // set the LED on
  digitalWrite(ain2, LOW);   // set the LED on
  delay(2000);
  
  //Acceleration
  for(int i=0;i<256;i++) {
    analogWrite(pwm,i);
    delay(30);
  }
  

}
