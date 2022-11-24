#include <EEPROM.h>

const char name[7]={1,0,2,1,0,0,8};
//char number[7];
//int value;

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
  
  //if(rx!=-1){
    if(rx=='?'){
      for(int j=0;j<7;j++){
        line=0;
       while(line<50){
        unsigned int wk=line%5;
        //num=name[j];
        for(i=0;i<5;i++) digitalWrite(col[i],LOW);
        digitalWrite(col[wk],HIGH);
        for(i=0;i<7;i++) digitalWrite(row[i],LOW);
        digitalWrite(col[wk],HIGH);
        
        digitalWrite(12,!(dot[name[j]][wk]&0x01));
        digitalWrite(11,!(dot[name[j]][wk]&0x02));
        digitalWrite(2,!(dot[name[j]][wk]&0x04));
        digitalWrite(9,!(dot[name[j]][wk]&0x08));
        digitalWrite(4,!(dot[name[j]][wk]&0x10));
        digitalWrite(5,!(dot[name[j]][wk]&0x20));
        digitalWrite(6,!(dot[name[j]][wk]&0x40));

        line++;
        delay(4);
        }
        delay(1000);
    }
    }
    for(i=0;i<5;i++) digitalWrite(col[i],LOW);
    for(i=0;i<7;i++) digitalWrite(row[i],LOW);
  }
