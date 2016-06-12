//Info diver
//http://papcodientu.com/store/motor-driver-tb6612.html
//Info PWM
//https://www.arduino.cc/en/Tutorial/PWM

//Set board to: arduino pro or pro mini 5V

int pwm = 9;


void setup() {                
  // initialize the digital pin as an output.
  pinMode(pwm, OUTPUT);
}

void loop() {
  
  
  //Acceleration
  for(int i=0;i<256;i++) {
    analogWrite(pwm,i);
    delay(30);
  }
  

}
