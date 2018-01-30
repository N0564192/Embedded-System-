int sensorPin = A0;            
unsigned int sensorValue = 0;  

void setup()
{

  Serial.begin(9600);        
}

void loop()
{
  
  sensorValue = analogRead(sensorPin);     
  Serial.print(sensorValue);

}
