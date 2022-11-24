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

int ana_data;

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
  //Serial.println(analogRead(A0));
  Serial.println(num);
  delay(10);
  ana_data=analogRead(A0)*0.1;
  num=ana_data;
  int num_a;
  int num_b;

  if(20<=num<=50){
    num_a=num/10;
    num_b=num%10;
  }
  if(50<=num<=80){
    num_a=num/10;
    num_b=num%10;
  }else{
    num_a=0;
    num_b=0;
  }

  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  seg(0x00);

  digitalWrite(10,HIGH);
  seg(seg_table[num_a]);
  delay(10);

  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  seg(0x00);

  digitalWrite(11,HIGH);
  seg(seg_table[num_b]);
  delay(10);
  
  delay(10);
}
