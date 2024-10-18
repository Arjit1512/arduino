#define IN_11  2        // L298N #1 in 1 motor Front Right
#define IN_12  3        // L298N #1 in 2 motor Front Right
#define IN_13  5        // L298N #1 in 3 motor Back Right
#define IN_14  6        // L298N #1 in 4 motor Back Right

#define IN_21  8        // L298N #2 in 1 motor Front Left
#define IN_22  9        // L298N #2 in 2 motor Front Left
#define IN_23  12       // L298N #2 in 3 motor Back Left
#define IN_24  13       // L298N #2 in 4 motor Back Left

#define ENA_m1 5        // Enable/speed motor Front Right 
#define ENB_m1 6        // Enable/speed motor Back Right
#define ENA_m2 10       // Enable/speed motor Front Left
#define ENB_m2 11       // Enable/speed motor Back Left
int command;
void setup() {

  // put your setup code here, to run once:
pinMode(IN_11,OUTPUT);
pinMode(IN_12,OUTPUT);
pinMode(IN_13,OUTPUT);
pinMode(IN_14,OUTPUT);

pinMode(IN_21,OUTPUT);
pinMode(IN_22,OUTPUT);
pinMode(IN_23,OUTPUT);
pinMode(IN_24,OUTPUT);

    pinMode(ENA_m1, OUTPUT);
    pinMode(ENB_m1, OUTPUT);
    pinMode(ENA_m2, OUTPUT);
    pinMode(ENB_m2, OUTPUT);
Serial.begin(9600);
}
void goAhead(){ 
int speedCar=100;
      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
     // analogWrite(ENA_m1, speedCar);

      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
      //analogWrite(ENB_m1, speedCar);


      digitalWrite(IN_21, LOW);
      digitalWrite(IN_22, HIGH);
    //  analogWrite(ENA_m2, speedCar);


      digitalWrite(IN_23, HIGH);
      digitalWrite(IN_24, LOW);
  //    analogWrite(ENB_m2, speedCar);

  }
  void stopRobot(){  
int speedCar=100;
      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, LOW);
      //analogWrite(ENA_m1, speedCar);


      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, LOW);
      //analogWrite(ENB_m1, speedCar);

  
      digitalWrite(IN_21, LOW);
      digitalWrite(IN_22, LOW);
     // analogWrite(ENA_m2, speedCar);

      
      digitalWrite(IN_23, LOW);
      digitalWrite(IN_24, LOW);
      //analogWrite(ENB_m2, speedCar);
  
  }
void loop() {
goAhead();  
}
