#include <EEPROM.h>

char name[256];
int rx,i=0;
int value;
//char new_name[];

void setup() {
  Serial.begin(9600);
}

void loop() {
  rx=Serial.read();
  //x=EEPROM.read(name);

  if(rx!=-1){
    if(rx=='?'){
      for(i=0;i<=sizeof(name);i++){
        name[i]=EEPROM.read(i);
        //value=EEPROM.read(name);
      }
      Serial.print(name);
    }else{
      if(rx=='@'){
        i=0;
      }else if(rx=='\n'){
        EEPROM.write(i++,rx);
        EEPROM.write(i++,0);
      }else{
        EEPROM.write(i++,rx);
      }
    }
  }
}
