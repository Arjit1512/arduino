void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(7)==1)
{
Serial.println("HIGH");
}

else if(digitalRead(7)==0)
{
Serial.println("LOW");
}

}
