void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)


void loop() {
  // put your main code here, to run repeatedly:
   unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

  float val1 = analogRead(A0);
  delay(2000);
  float val2 = analogRead(A0);
  delay(2000);
  float val3 = analogRead(A0);
  delay(2000);
  float val4 = analogRead(A0);
  delay(2000);
  float val5 = analogRead(A0);
  delay(2000);
  float val6 = analogRead(A0);
  delay(2000);
  float val7 = analogRead(A0);
  delay(2000);
  float val8 = analogRead(A0);
  delay(2000);
  float val9 = analogRead(A0);
  delay(2000);
  float val10 = analogRead(A0);
  delay(2000);

  float vrms= sqrt(((val1*val1)+(val2*val2)+(val3*val3)+(val4*val4)+(val5*val5)+(val6*val6)+(val7*val7)+(val8*val8)+(val9*val9)+(val10*val10))/10);
  Serial.println(vrms);
  }
}
