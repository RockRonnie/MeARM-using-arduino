
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int x_key = A1;
int y_key = A0;
int x_key2 = A3;
int y_key2 = A2;
int x_pos;
int y_pos;
int x_pos2;
int y_pos2;
int servo1_pin = 8;
int servo2_pin = 9;
int servo3_pin = 10;
int servo4_pin = 11;
int initial_position = 90;
int initial_position1 = 90;
int initial_position2 = 90;
int initial_position3 = 90;
void setup ( ) {
  Serial.begin (9600) ;
  servo1.attach (servo1_pin ) ;
  servo2.attach (servo2_pin ) ;
  servo3.attach (servo3_pin ) ;
  servo4.attach (servo4_pin ) ;
  servo1.write (initial_position);
  servo2.write (initial_position1);
  servo3.write (initial_position2);
  servo4.write (initial_position3);
  pinMode (x_key, INPUT) ;
  pinMode (y_key, INPUT) ;
  pinMode (x_key2, INPUT) ;
  pinMode (y_key2, INPUT) ;
}

void loop ( ) {
  x_pos = analogRead (x_key) ;
  y_pos = analogRead (y_key) ;
  x_pos2 = analogRead (x_key2) ;
  y_pos2 = analogRead (y_key2) ;

  if (x_pos < 300) {
    if (initial_position < 10) { } else {
      initial_position = initial_position - 20;
      servo1.write ( initial_position ) ;
      delay (75) ;
    }
  } if (x_pos > 700) {
    if (initial_position > 180)
    {
    }
    else {
      initial_position = initial_position + 20;
      servo1.write ( initial_position ) ;
      delay (75) ;
    }
  }

  if (y_pos < 300) {
    if (initial_position1 < 10) { } else {
      initial_position1 = initial_position1 - 20;
      servo2.write ( initial_position1 ) ;
      delay (75) ;
    }
  } if (y_pos > 700) {
    if (initial_position1 > 180)
    {
    }
    else {
      initial_position1 = initial_position1 + 20;
      servo2.write ( initial_position1 ) ;
      delay (75) ;
    }
  }
  
  if (x_pos2 < 300) {
    if (initial_position2 < 10) { } else {
      initial_position2 = initial_position2 - 20;
      servo3.write ( initial_position2 ) ;
      delay (75) ;
    }
  } if (x_pos2 > 700) {
    if (initial_position2 > 180)
    {
    }
    else {
      initial_position2 = initial_position2 + 20;
      servo3.write ( initial_position2 ) ;
      delay (75) ;
    }
  }
  
  if (y_pos2 < 300) {
    if (initial_position3 < 10) { } else {
      initial_position3 = initial_position3 - 20;
      servo4.write ( initial_position3 ) ;
      delay (75) ;
    }
  } 
  
  if (y_pos2 > 700) {
    if (initial_position3 > 180)
    {
    }
    else {
      initial_position3 = initial_position3 + 20;
      servo4.write ( initial_position3 ) ;
      delay (75) ;
    }
  }
}

