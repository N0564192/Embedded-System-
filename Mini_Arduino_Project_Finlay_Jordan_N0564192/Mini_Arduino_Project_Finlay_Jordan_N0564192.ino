int RED = 8;
int AMBER = 2;
int GREEN = 3;
int BUZZER = 5;
int ECHOPIN = 4;
int TRIGPIN = 7;
int SENSORPIN = A0;
char Mode='r';
int Lightlevel;
int Distance()
{
  int dist;
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN,LOW); 
  dist = pulseIn(ECHOPIN, HIGH);
  dist = dist/50;
  Serial.print(dist);
  Serial.println("cm");
  return dist;
}
int LightLevelRead()
{
  int ll;
  ll = analogRead(SENSORPIN);
  return ll;
}
void Regular()
{
  digitalWrite(GREEN, LOW);
 digitalWrite(AMBER, LOW);
 digitalWrite(RED, HIGH);
 delay(2000);
 digitalWrite(RED, LOW);
 digitalWrite(AMBER, HIGH);
 delay(1000);
 digitalWrite(AMBER, LOW);
 digitalWrite(GREEN, HIGH);
 delay(2000);
 digitalWrite(GREEN, LOW);
 digitalWrite(AMBER, HIGH);
 delay(1000);
}
void Pedestrian()
{
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
    for (int i = 0; i < 10; i++)
    {
      digitalWrite(AMBER, HIGH);
      delay(100);
      digitalWrite(AMBER, LOW);
      delay(100);
      tone(BUZZER, 500, 200);
    }
}
void Nightmode(int distancecm)
{
  distancecm;
  if (distancecm > 10)
  {
    digitalWrite(GREEN, LOW);
    digitalWrite(AMBER, LOW);
    digitalWrite(RED, HIGH);
  }
  else
  {
    digitalWrite(RED, LOW);
    digitalWrite(AMBER, LOW);
    digitalWrite(GREEN, HIGH);
    
  }
  delay(200);
}
void setup() {
 Serial.begin(9600); 
 pinMode(RED, OUTPUT);
 pinMode(AMBER, OUTPUT);
 pinMode(GREEN, OUTPUT);
 pinMode(BUZZER, OUTPUT);
 pinMode(ECHOPIN, INPUT);
 pinMode(TRIGPIN, OUTPUT);
}

void loop() {
while (Serial.available())
  Mode = Serial.read();

  int distancecm;
  
  
  switch(Mode)
  {
  case 'r':
    Regular();
  case 'p':
    distancecm=Distance();
    while (distancecm < 10)
    {
    Pedestrian();
    distancecm=Distance();
    }
    {
    Regular();
    }
  case 'n':
    Lightlevel=LightLevelRead();
    distancecm=Distance();
    if (Lightlevel < 200)
    {
    distancecm=Distance();   
    Nightmode(distancecm);
    }
    else
    {
    Regular();  
    }
  }  
}



