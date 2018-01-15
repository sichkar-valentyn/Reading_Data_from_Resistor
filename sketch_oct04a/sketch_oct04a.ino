
// File: sketch_oct04a.ino
// Description: Reading Data from Resistor
// Environment: Arduino IDE
//
// MIT License
// Copyright (c) 2018 Valentyn N Sichkar
// github.com/sichkar-valentyn
// Reference to:
// [1] Valentyn N Sichkar. Reading Data from Resistor // GitHub platform [Electronic resource]. URL: https://github.com/sichkar-valentyn/Reading_Data_from_Resistor (date of access: XX.XX.XXXX)

// Setting constants
int analogPin = 1;
float R1 = 0;

// Putting setup code here, to run once
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

// Putting main code here, to run repeatedly
void loop()
{
  // Reading the data from resistor
  R1 = analogRead(analogPin);

  // Showing current value of the resistor in the Serial Monitor
  Serial.println(R1);

  // Switching on the red LED and switching off the other one
  if(R1 > 984) digitalWrite(7, HIGH);
  else digitalWrite(7, LOW);

  // Switching on the green LED and switching off the other one
  if(R1 < 985) digitalWrite(8, HIGH);
  else digitalWrite(8, LOW);

  delay(1000);
}

