#include<Servo.h>

int deg=90;
int ad;//ボリューム抵抗
Servo myservo;//構造体の定義

void setup() {
  Serial.begin(9600);
  myservo.attach(8);//サーボ変数の割り当て
}

void loop() {
  ad=analogRead(A0);//ボリューム抵抗を読み取る（A0に繋がってる）
  deg=ad/1023.0*180;
  //ボリューム抵抗は0から1023の範囲、サーボは0から180の範囲で動くので
  //ボリューム抵抗の値を1023で割ってサーボの範囲でかけることで
  //ボリューム抵抗の値をサーボの値に変換する
    
  Serial.print(deg);//変換した値をシリアルモニタに表示
  Serial.print('\n');

  myservo.write(deg);//サーボを動かすやつ

  delay(10);//反応をできるだけリアタイにする（小さくすればするほど、小さくなる）
}
