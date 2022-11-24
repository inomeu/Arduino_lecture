#include<Servo.h>

int deg=90;
int rx;
Servo myservo;//構造体の定義

void setup() {
  Serial.begin(9600);
  myservo.attach(8);//サーボ変数の割り当て
}

void loop() {
  rx=Serial.read();
  if(rx=='+'){
    if(deg<=170) deg+=10;
  }
  if(rx=='-'){
    if(deg>=10) deg-=10;
  }
  Serial.print(deg);
  Serial.print('\n');

  myservo.write(deg);

  delay(500);
}
