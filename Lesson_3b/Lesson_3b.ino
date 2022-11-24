int ad;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  ad=analogRead(A0);
  Serial.println(ad);
  if(ad>100){
    digitalWrite(8,HIGH);
    //delay(1000);
  }else{
    digitalWrite(8,LOW);
    //delay(1000);
  }
}
//ボリューム抵抗回したら抵抗値が変わった。
