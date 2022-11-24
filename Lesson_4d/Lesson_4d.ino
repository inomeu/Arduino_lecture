const int doremi[]={0,262,294,330,349,392,440,494,523};

void setup() {
}

void loop() {
  while(1){
    if(!digitalRead(7)){
      break;
    }
  }

  tone(9,doremi[3]*2);
  delay(100);
  noTone(9);
  delay(50);

  tone(9,doremi[3]*2);
  delay(100);
  noTone(9);
  delay(50);

  delay(150);

  tone(9,doremi[3]*2);
  delay(100);
  noTone(9);
  delay(50);

  delay(150);

  tone(9,doremi[1]*2);
  delay(100);
  noTone(9);
  delay(50);

  tone(9,doremi[3]*2);
  delay(100);
  noTone(9);
  delay(50);

  delay(150);

  tone(9,doremi[5]*2);
  delay(100);
  noTone(9);
  delay(50);
}
