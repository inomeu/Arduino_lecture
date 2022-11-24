//trueとfalseで状態を判断する
int i=1;//OFF
boolean state=false;

char id[]="b1021008\n";
char name[]="Mei Inoue\n";

void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {

  if(digitalRead(7) == HIGH) i=1;
  else i=0;

  if(state==0){
    state==true;
  }
 
  if(i==0&&state==true){//タクトスイッチoff
    Serial.print(id);
    delay(1000);
    if(digitalRead(7) == HIGH) i=1;
    else i=0;
  }
  
  if(i==1&&state==true){
     Serial.print(name);
     delay(1000);
     state=false;
     int i=1;
   }

   //Serial.end();
}
