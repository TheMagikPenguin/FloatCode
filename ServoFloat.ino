#include <Servo.h> 

 
 

int sensor = 0; 

int angle = 0; 

int servoPin = 10; 

Servo servo10; 

// pt 2 

int pos = 0; 

Servo servo_9; 

 
 

void setup() 

{ 

  pinMode(A0, INPUT); 

  pinMode(8, OUTPUT); 

  Serial.begin(9600); 

  servo10.attach(servoPin); 

  // pt 2 

  servo_9.attach(9, 500, 2500); 

} 

 
 

void loop() 

{ 

  sensor = analogRead(A0); 

  angle = sensor * 10; 

  servo10.write(angle); 

  Serial.print("sensor = "); 

  Serial.println(sensor); 

  // pt 2 

  for (pos = 0; pos <= 180; pos += 1) { 

    // tell servo to go to position in variable 'pos' 

    servo_9.write(pos); 

    servo10.write(pos*0.3); 

    // wait 15 ms for servo to reach the position 

    delay(10); // Wait for 15 millisecond(s) 

 
 

  } 

  for (pos = 180; pos >= 0; pos -= 1) { 

    // tell servo to go to position in variable 'pos' 

    servo_9.write(pos); 

    servo10.write(pos*0.3); 

    // wait 15 ms for servo to reach the position 

    delay(10); // Wait for 15 millisecond(s) 

 
 

  } 

} 