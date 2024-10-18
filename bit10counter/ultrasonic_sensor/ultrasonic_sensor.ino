#define echopin 2
#define trigpin 3

long duration;
int index;
int brightness=0;
int led=9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);
  index=(duration*0.034/2);
  Serial.print("Distance : ");
  Serial.println(index);
  Serial.println(" cm ");
  delay(1000);

  if(index<=20){
  Serial.println("Bright");
  brightness = 0;
  analogWrite(led,brightness);}
else if(index>20 && index<=40){
  Serial.println("Mild");
  brightness = 10;
  analogWrite(led,brightness);}
else if(index>40 && index<=60){
  Serial.println("Medium");
  brightness = 20;
  analogWrite(led,brightness);}
else if(index>60 && index<=75){
  Serial.println("MildDark");
  brightness = 30;
  analogWrite(led,brightness);}
else if(index>75 && index<=900){
  Serial.println("Dark");
  brightness = 40;
  analogWrite(led,brightness);}

 delay(100);

//delay(1000);
}


  
