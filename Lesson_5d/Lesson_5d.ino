int width=1500;
int rx;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT); //出力ピンに設定
}

void loop() {
  rx=Serial.read();
  if(rx=='+') width += 100; //+送信すると角度+100で変化
  if(rx=='-') width -= 100; //-送信すると角度-100で変化
  Serial.print(width);
  Serial.print('\n');

  digitalWrite(8,HIGH);
  delayMicroseconds(width);
  digitalWrite(8,LOW);
  delayMicroseconds(20000 - width);
}
