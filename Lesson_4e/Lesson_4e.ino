const int doremi[]={0,262,294,330,349,392,440,494,523};
const int music[]={41,42,43,44,43,42,21,43,44,45,46,45,44,23,41,40,41,40,41,40,41,40,81,81,82,82,83,83,84,84,43,42,41,0};
int i,j,k;

void setup() {
}

void loop() {
  while(1){
    if(!digitalRead(7)){
      break;
    }
  }

  i=0;

  while(1){
    j=music[i]/10;
    k=music[i]%10;

    if(k){
      tone(9,doremi[k]);
    }
    else{
      noTone(9);
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
    if(music[i]==0){
      noTone(9);
      break;
    }
   }
 }
