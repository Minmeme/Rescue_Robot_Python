// this code for uploed in your arduion
// don t forget chenge my code to macth your robot
#include <Wire.h>
#include <VarSpeedServo.h>

VarSpeedServo MyServo1, MyServo2, MyServo3, MyServo4, MyServo5, MyServo6; // set sevro
//// degree 's servro
int Degree1 = 90;
int Degree2 = 155; //140
int Degree3 = 0; //0
int Degree4 = 93; //50
int Degree5 = 90;
int Degree6 = 150;

#define MAGE_ADDRESS 0x8  // Replace with same address used in Python script

#define Ain1 8
#define Ain2 9
#define PwmA 10

#define Bin1 3
#define Bin2 7
#define PwmB 6

#define Cin1 2
#define Cin2 4

#define PwmC 5

#define Din1 11
#define Din2 13
#define PwmD 12

//#define Ein1 54
//#define Ein2 55
//#define PwmE 45
//
//#define Fin1 56
//#define Fin2 57
//#define PwmF 46

void setup() {
  Serial.begin(115200);  // Open serial communication
  Wire.begin(MAGE_ADDRESS); //set I2C

  // set servo pin //
  MyServo1.attach(40);
  MyServo2.attach(41);
  MyServo3.attach(38);
  MyServo4.attach(42);
  MyServo5.attach(43);
  MyServo6.attach(44);

  // set Drive Motor pin //
  pinMode(Ain1, OUTPUT);
  pinMode(Ain2, OUTPUT);

  pinMode(Bin1, OUTPUT);
  pinMode(Bin2, OUTPUT);

  pinMode(Cin1, OUTPUT);
  pinMode(Cin2, OUTPUT);

  pinMode(Din1, OUTPUT);
  pinMode(Din2, OUTPUT);

  SetServo();
}

void loop() {
// KaFL(100);
// KaFR(-100);
 Wire.onReceive(ReceiveEvent);
}

