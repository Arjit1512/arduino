void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int val=analogRead(A0);
Serial.println(val);
int volt=(5.0/1023)*val;
Serial.println(volt);
delay(1000);
}
