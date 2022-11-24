const int doremi[]={0,262,294,330,349,392,440,494,523};

const int kaeru_music[]={41,42,43,44,43,42,21,43,44,45,46,45,44,23,41,40,41,40,41,40,41,40,81,81,82,82,83,83,84,84,43,42,41,0};
//ドレミファミレド ミファソラソファミ ドドドド ドドレレミミファファミレド
const int kira_music[]={41,41,45,45,46,46,25,44,44,43,43,42,42,21,45,45,44,44,43,43,22,45,45,44,44,43,43,22,41,41,45,45,46,46,25,44,44,43,43,42,42,21,0};
const int kitsune_music[]={81,82,83,84,85,0,85,0,86,84,81,86,45,86,84,81,86,45,85,84,84,84,84,83,83,83,83,82,83,82,81,83,45,85,84,84,84,84,83,83,83,83,82,82,83,41,0};

int i,j,k;
int rx;
int red;

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  rx=Serial.read();
  
  i=0;
 
  if(rx=='A'){
    //red += 32;
    while(1){
      j=kaeru_music[i]/10;//10のくらい（四分音符か八部音符か）
      k=kaeru_music[i]%10;//1のくらい（音程）

      if(k){
        tone(9,doremi[k]);
        digitalWrite(9,HIGH);
      }
      else{
        noTone(9);
        digitalWrite(9,LOW);
      }
    
      if(j==4){
        delay(350);
      }
      else if(j==8){
        delay(150);
      }
      else if(j==2){
        delay(750);
      }

      noTone(9);
      delay(50);

      i++;
      
      if(kaeru_music[i]==0||rx=='r'){
       //red -= 32;
       noTone(9);
       break;
      }
   }
 }

  if(rx=='B'){
    //red += 32;
    i=0;
    while(2){
      j=kira_music[i]/10;//10のくらい（四分音符か八部音符か）
      k=kira_music[i]%10;//1のくらい（音程）

      if(k){
        tone(9,doremi[k]);
        digitalWrite(10,HIGH);
      }
      else{
        noTone(9);
        digitalWrite(10,LOW);
      }
    
      if(j==4){
        delay(350);
      }
      else if(j==8){
        delay(150);
      }
      else if(j==2){
        delay(750);
      }

      noTone(9);
      delay(50);

      i++;
      
      if(kira_music[i]==0||rx=='r'){
       //red -= 32;
       noTone(9);
       break;
      }
   }
 }

  if(rx=='C'){
    //red += 32;
    i=0;
    while(3){
      j=kitsune_music[i]/10;//10のくらい（四分音符か八部音符か）
      k=kitsune_music[i]%10;//1のくらい（音程）

      if(k){
        tone(9,doremi[k]);
        digitalWrite(11,HIGH);
      }
      else{
        noTone(9);
        digitalWrite(11,LOW);
      }
    
      if(j==4){
        delay(350);
      }
      else if(j==8){
        delay(280);
      }
      else if(j==2){
        delay(750);
        

      noTone(9);
      delay(50);

      i++;
      
      if(kitsune_music[i]==0||rx=='r'){
       noTone(9);
       break;
      }
   }
 }
 }
}
