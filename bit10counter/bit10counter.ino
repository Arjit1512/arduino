int pin1=5;  //initializing pins as vars beacuse who wants to use constants:
int pin2=7;
int pin3=9;
int pin4=11;
int timr=3000;

void setup() {
  // put your setup code here, to run once:

pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);pinMode(pin3,OUTPUT);pinMode(pin4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;  
digitalWrite(pin4,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin1,LOW);
delay(timr);

while(i<11){//We start the counter:

if((i % 2) > 0) { digitalWrite(pin1, HIGH); } else { digitalWrite(pin1, LOW); }

if((i % 4) > 1) { digitalWrite(pin2, HIGH); } else { digitalWrite(pin2, LOW); }

if((i % 8) > 3) { digitalWrite(pin3, HIGH); } else { digitalWrite(pin3, LOW); }

if((i % 16) > 7) { digitalWrite(pin4, HIGH); } else { digitalWrite(pin4, LOW); }
i++;
delay(timr);
}
}
