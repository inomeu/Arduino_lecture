void seg(char x){
  if(x & 0x80) digitalWrite(9,LOW);
  else         digitalWrite(9,HIGH);
  if(x & 0x40) digitalWrite(8,LOW);
  else         digitalWrite(8,HIGH);
  if(x & 0x20) digitalWrite(7,LOW);
  else         digitalWrite(7,HIGH);
  if(x & 0x10) digitalWrite(6,LOW);
  else         digitalWrite(6,HIGH);
  if(x & 0x08) digitalWrite(5,LOW);
  else         digitalWrite(5,HIGH);
  if(x & 0x04) digitalWrite(4,LOW);
  else         digitalWrite(4,HIGH);
  if(x & 0x02) digitalWrite(3,LOW);
  else         digitalWrite(3,HIGH);
  if(x & 0x01) digitalWrite(2,LOW);
  else         digitalWrite(2,HIGH);
}

void setup() {
  Serial.begin(9600);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

int rx,num='0';
char seg_table[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x27,0x7f,0x6f};

void loop() {
  rx=Serial.read();

  if(rx != -1){
    num=rx;
  }

  if(rx=='a'){
    num=0;
  }

  if(rx=='b'){
    num=1;
  }

  if(rx=='c'){
    num=2;
  }

  if(rx=='d'){
    num=3;
  }

  if(rx=='e'){
    num=4;
  }

  if(rx=='f'){
    num=5;
  }

  //一瞬表示を消す
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  seg(0x00);

  //10の位の表示
  digitalWrite(10,HIGH);
  seg(seg_table[1]);
  delay(10);

  //一瞬表示を消す
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  seg(0x00);

  //1のくらいの表示
  digitalWrite(11,HIGH);
  seg(seg_table[num]);
  delay(10);
}
