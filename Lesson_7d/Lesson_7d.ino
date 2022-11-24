unsigned int i,line=0;
const char col[5]={13,3,10,7,8};
const char row[7]={12,11,2,9,4,5,6};
const char dot[10][5]={
  {0x3e,0x51,0x49,0x45,0x3e},//0
  {0x00,0x42,0x7f,0x40,0x00},//1
  {0x42,0x61,0x51,0x49,0x46},//2
  {0x21,0x41,0x45,0x4b,0x31},//3
  {0x18,0x14,0x12,0x7f,0x10},//4
  {0x27,0x45,0x45,0x45,0x39},//5
  {0x3c,0x4a,0x49,0x49,0x30},//6
  {0x01,0x71,0x09,0x05,0x03},//7
  {0x36,0x49,0x49,0x49,0x36},//8
  {0x06,0x49,0x49,0x29,0x1e},//9
};

void setup() {
  Serial.begin(9600);
  
  for(i=0;i<5;i++) pinMode(col[i],OUTPUT);
  for(i=0;i<7;i++) pinMode(row[i],OUTPUT);
}

int rx='0';
int num='0';


void loop() {
  rx=Serial.read();
  unsigned int wk=line%5;
  
  for(i=0;i<5;i++) digitalWrite(col[i],LOW);
  
  digitalWrite(col[wk],HIGH);

  
  if(rx=='0'){
    num=0;
  }
  if(rx=='1'){
    num=1;
  }
  if(rx=='2'){
    num=2;
  }
  if(rx=='3'){
    num=3;
  }
  if(rx=='4'){
    num=4;
  }
  if(rx=='5'){
    num=5;
  }
  if(rx=='6'){
    num=6;
  }
  if(rx=='7'){
    num=7;
  }
  if(rx=='8'){
    num=8;
  }
  if(rx=='9'){
    num=9;
  }

  
  digitalWrite(12,!(dot[num][wk]&0x01));
  digitalWrite(11,!(dot[num][wk]&0x02));
  digitalWrite(2,!(dot[num][wk]&0x04));
  digitalWrite(9,!(dot[num][wk]&0x08));
  digitalWrite(4,!(dot[num][wk]&0x10));
  digitalWrite(5,!(dot[num][wk]&0x20));
  digitalWrite(6,!(dot[num][wk]&0x40));

  line++;
  delay(2);
}
