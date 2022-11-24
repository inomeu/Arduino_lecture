void setup() {
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(8,HIGH);//HIGHになってるところでキープされる的な
  delayMicroseconds(1500);
  digitalWrite(8,LOW);
  delayMicroseconds(20000);
}

//このコードやるとサーボモーターを手で動かせなくなる
