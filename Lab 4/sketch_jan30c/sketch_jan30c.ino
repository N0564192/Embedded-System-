int A = 3;
int B = 4;
int C = 6; 
int D = 8;
int E = 9;
int F = 11;
int G = 12;

int counter=0;
int i;




void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}
static void Zero()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,HIGH); 
}
static void One()
{
     digitalWrite(A,HIGH);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH); 
}

static void Two()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,HIGH);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW); 
}

static void Three()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,LOW); 
}

static void Four()
{
     digitalWrite(A,HIGH);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW); 
}

static void Five()
{
     digitalWrite(A,LOW);
     digitalWrite(B,HIGH);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,HIGH);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW); 
}

static void Six()
{
     digitalWrite(A,LOW);
     digitalWrite(B,HIGH);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW); 
}

static void Seven()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,HIGH);
     digitalWrite(E,HIGH);
     digitalWrite(F,HIGH);
     digitalWrite(G,HIGH); 
}

static void Eight()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,LOW);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW); 
}

static void Nine()
{
     digitalWrite(A,LOW);
     digitalWrite(B,LOW);
     digitalWrite(C,LOW);
     digitalWrite(D,LOW);
     digitalWrite(E,HIGH);
     digitalWrite(F,LOW);
     digitalWrite(G,LOW); 
}


void loop() {
        
  if(counter == 0) 
  Zero();
  if(counter == 1) 
  One();
  if(counter == 2) 
  Two();
  if(counter == 3) 
  Three();
  if(counter == 4) 
  Four();
  if(counter == 5) 
  Five();
  if(counter == 6) 
  Six();
  if(counter == 7) 
  Seven();
  if(counter == 8) 
  Eight();
  if(counter == 9) 
  Nine();
        
  if (counter == 0)
  {
    i = 0;
  }
  delay(2000);
  
  i = i + 1;
  // count from 0 to 9
  if(i >= 10)
  {
    counter--;
  }
  else
  {
    counter++;
  }
    


}
