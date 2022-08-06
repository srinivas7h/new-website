int Buzz=8;
int LED=13;
int PIR=3;
int val=0;
void setup()
{
  pinMode(Buzz,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(PIR,INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=digitalRead(PIR);
  if(val==HIGH)
   {
    digitalWrite(LED,HIGH);
    digitalWrite(Buzz,HIGH);
    Serial.println("Movement Detected");
   }
   else
   {
    digitalWrite(LED,LOW);
    digitalWrite(Buzz,LOW);
    Serial.println("Movement not Detected");
   }
}
