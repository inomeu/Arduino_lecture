int i=0;
int var=0;
int old_var=0;
int state=0;


void setup() {
  // put your setup code here, to run once:
   pinMode(7,INPUT);
   pinMode(13,OUTPUT);
}

void loop() {
  var=digitalRead(7);
  if(var==HIGH&&old_var==LOW){
    state=1-state;
    delay(10);
  }
  if(var==LOW&&old_var==HIGH){
    delay(10);
  }

  old_var=var;

  if(state == 1){
    digitalWrite(13, HIGH); //LEDピンにHIGHを出力
  }
  else{
    digitalWrite(13, LOW); //LEDピンにLOWを出力
  }

  // put your main code here, to run repeatedly:

}
