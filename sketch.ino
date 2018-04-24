int pos=90; 
int servoPin = 9; 
int servoDelay =15; 
Servo myServo; 
 
void setup() {
  Serial.begin(9600); 
  myServo.attach(servoPin);
}
 
void loop() {
  while(Serial.available()==0){}; 
  pos = Serial.read(); 
  myServo.write(pos); 
  delay(servoDelay); 
}
