void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly://
double val=analogRead(A0);
Serial.println(val);
double volt=(5/66)*val*1000;
Serial.println(volt);

delay(1000);


}
