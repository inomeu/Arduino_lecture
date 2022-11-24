int rx;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  rx=Serial.read();
  if (rx=='1'){
    digitalWrite(8,HIGH);
  }else if (rx=='0'){
    digitalWrite(8,LOW);
  }
}

//1送信すると光続ける、0送信すると消える
