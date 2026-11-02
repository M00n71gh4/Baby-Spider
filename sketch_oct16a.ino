#include <Servo.h>
const int servoPin = A0; /* Servo I/O pin*/
const int pirPin = 4; /*PIR I/O pin*/
Servo servo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(servoPin); /*servo.attach(A1);*/
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(pirPin);
  
  if (sensorValue == HIGH){ /* If the sensor returns 1*/
    Serial.println("Motion detected");
    servo.write(0); /* Turns the head forward*/
    delay(1000);
  }else{
    Serial.println("Motion NOT detected");
    servo.write(180); /* Turn the head backwards*/
    delay(250);
  }
    
}
