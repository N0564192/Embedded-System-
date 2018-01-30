#define ECHOPIN 3
#define TRIGPIN 2
#define LED 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN,LOW); 
 float distance = pulseIn(ECHOPIN, HIGH); // return 0 if no high pulse in 1sec
 distance = distance/50;
 if (distance < 10)
 {
    digitalWrite(LED, HIGH);
    delay (500);
    digitalWrite(LED, LOW);
    delay (500);
    digitalWrite(LED, HIGH);
    delay (500);
    digitalWrite(LED, LOW);
    delay (500);
    digitalWrite(LED, HIGH);
    delay (500);
    digitalWrite(LED, LOW);
    delay (500);
    digitalWrite(LED, HIGH);
    delay (500);
    digitalWrite(LED, LOW);
    delay (500);
    digitalWrite(LED, HIGH);
    delay (500);
    digitalWrite(LED, LOW);
    delay (500);
 }
 Serial.print(distance);
 Serial.println("cm");
 delay(200);
  
}
