int sensorPin = A0;  
int LED = 8;          
unsigned int sensorValue = 0;  

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);        
}

void loop()
{
  
  sensorValue = analogRead(sensorPin); // the larger the resistor value the smaller the light intensity reading     
  Serial.println(sensorValue);
  if (sensorValue < 60)
  {
    for (int i = 0; i < 5; i++)
    {
      digitalWrite(LED, HIGH);
      delay(500);
      digitalWrite(LED, LOW);
      delay(500);
    }
  }
  delay(200);
}

