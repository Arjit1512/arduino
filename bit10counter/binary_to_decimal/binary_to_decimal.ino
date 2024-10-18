void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(13,INPUT);
Serial.begin(9600);
 int val1,val2,val3,val4,dec;
  // put your main code here, to run repeatedly:
digitalWrite(2,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(7,HIGH);

val1=digitalRead(8);
val2=digitalRead(10);
val3=digitalRead(11);
val4=digitalRead(13);

Serial.println(val1);
Serial.println(val2);
Serial.println(val3);
Serial.println(val4);

dec=2*2*2*val1 + 2*2*val2 +2*val3 +1*val4;
Serial.println(dec);
}

void loop() {
 }
