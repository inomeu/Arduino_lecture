int i=0;
word ms;

void setup() {
  pinMode(7,INPUT);//7ピンを入力に設定
  pinMode(13,OUTPUT);//13ピンを出力に設定
}

void loop() {
  if(digitalRead(7) == HIGH) i=1;//プッシュスイッチを押している間
  else i=0;

  if(i==1){//タクトスイッチoffのとき
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(900);
   }

   if(digitalRead(7)==LOW){
   if(ms<30000)ms++;
   if(ms>=3000){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
   
   }
   //else{
    if(ms>5 && ms<3000){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(400);
   }
   }
   ms==0;
   }
   delay(1);
}
