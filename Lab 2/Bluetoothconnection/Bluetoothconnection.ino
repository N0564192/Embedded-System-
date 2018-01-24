/*
  Bluetooth communication

  By putting Serial this will print the messages in the serial monitor
  By putting Serial1 this will print the messages in putty window

  Was unsure what you wanted for task 14 of the lab but I understand how to display the message in
  the arduino program and external program like putty.
 */
int led2 = 10;
int led1 = 9;                           // Use digital pin 11 for the led
int buzzer = 8;
char inVal;                             // Use this to read a character from the serial port

/****************************************************************************************************************************/

void setup() 
{
  pinMode(led1, OUTPUT);// Initialise digital pin for the LED
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  Serial1.begin(115200);// Set the Baudrate to 115200 on putty as well (note which serial port) 
}

/***************************************************************************************************************************/

void loop() 
{
  if (Serial.available()>0)            // Will only read the serial when something is entered (have to enter the x twice to stop)
    {
    inVal=Serial.read();               // Reads data from the serial port
   switch(inVal)
   { 
    case 'x':                   // If you enter 1 the  first LED will turn on then off
    {                                   
      digitalWrite(led1, HIGH);         // Turns the LED 1 on
      Serial1.println("You entered x"); // Prints out this message
      delay(2000);                      // Wait for 2 seconds
      digitalWrite(led1, LOW);          // Turns the LED 1 off
      Serial.println("You entered x, which turned the first LED on for 2 second");
    }
    break;
  {
    case 't':
      digitalWrite(led1, LOW);
      tone(buzzer, 500, 2000);
      Serial1.println("Waiting for command......."); 
      Serial.println("You entered t which makes the buzzer turn on and the second LED flash.");  
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(2000);
  }
   }
  }
}

/*********************************************************************************************************************************/
