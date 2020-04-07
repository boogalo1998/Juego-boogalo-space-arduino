int btn1 = 7;
int btn2 = 8;
int ledPin = 13;
int estado = 0;
int estado2 = 0;
int sensor = 0;
int sensor2 = 0;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  estado = digitalRead(btn1);
  estado2 = digitalRead(btn2);
  if (estado == HIGH) {

    digitalWrite(ledPin, HIGH);
    sensor = 1;
  }
  else if (estado2 == HIGH) {

    digitalWrite(ledPin, HIGH);
    sensor2 = 2;
  }
  else {
    digitalWrite(ledPin, LOW);
    sensor = 0;
    sensor2 = 0;
  }
  Serial.print(sensor);
  Serial.print('T');
  Serial.print(sensor2);
  
  delay(100);
}
