void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char text='z';
while(Serial.available() > 0)
{
  text=Serial.read();
  if(text=='Z')
  {
    digitalWrite(13,HIGH);
  }
  else if(text=='z')
  {
    digitalWrite(13,LOW);
  }
}
}
