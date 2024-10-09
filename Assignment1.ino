const int BUZZER = 13;

const int sensor_pin = A0;

int sensor_0;
int sensor_1;
int sensor_2;
int sensor_3;
int sensor_4;

const int threshold = 65;  // threshold to turn Buzzer on

void setup(){  // setup code that only runs once
  Serial.begin(9600);    // initialize serial communication
}

void loop(){   // code that loops forever
  sensor_0 = analogRead(A0);
  sensor_1 = analogRead(A1);
  sensor_2 = analogRead(A2);
  sensor_3 = analogRead(A3);
  sensor_4 = analogRead(A4); 
  
  Serial.print(sensor_0);
  Serial.print(",");
  Serial.print(sensor_1);
  Serial.print(",");
  Serial.print(sensor_2);
  Serial.print(",");
  Serial.print(sensor_3);
  Serial.print(",");
  Serial.println(sensor_4);
		 // print sensor value

  if (sensor_0 < 50) {
    tone(BUZZER, 440);
  } else if (sensor_1 < 50) {
    tone(BUZZER, 494);
  } else if (sensor_2 < 50) {
    tone(BUZZER, 523);
  } else if (sensor_3 < 50) {
    tone(BUZZER, 587);
  }else if (sensor_4 < 70) {
    tone(BUZZER, 659);
  } else {
    noTone(BUZZER);
  }
  
}