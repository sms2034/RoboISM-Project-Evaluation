int IRSensor = 12;
int LED = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(IRSensor, INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int value = digitalRead(IRSensor);
  Serial.println(".");
  Serial.print("Sensor value =");
  Serial.print(value);
  if (value == 0)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  delay(50);
}
