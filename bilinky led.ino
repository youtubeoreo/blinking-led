int LED = 13;
void setup()
{
  pinMode(13,OUTPUT);
  }
  void loop()
  {
  digitalRead(13,HIGH);
  delay(100);
  digitalRead(13,LOW);
  delay(100);
  }
