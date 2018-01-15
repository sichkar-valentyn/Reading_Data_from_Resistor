int analogPin = 1;
float R1 = 0;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  R1 = analogRead(analogPin);

  Serial.println(R1);

  if(R1 > 984) digitalWrite(7, HIGH);
  else digitalWrite(7, LOW);

  if(R1 < 985) digitalWrite(8, HIGH);
  else digitalWrite(8, LOW);

  delay(1000);
}

