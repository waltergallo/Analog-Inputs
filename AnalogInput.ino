int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0) <= 10){
  digitalWrite(13, HIGH);}
  else{
  digitalWrite(13, LOW);
  }

  if(analogRead(A0) <= 500){
  digitalWrite(12, HIGH);}
  else{
  digitalWrite(12, LOW);
  }

  if(analogRead(A0) <= 1020){
  digitalWrite(11, HIGH);}
  else{
  digitalWrite(11, LOW);
  }
}
