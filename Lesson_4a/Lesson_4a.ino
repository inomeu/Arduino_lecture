int rx;

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  rx=Serial.read();

  if(rx=='R'){
    digitalWrite(9,HIGH);
  }else if(rx=='r'){
    digitalWrite(9,LOW);
  }else if(rx=='G'){
    digitalWrite(10,HIGH);
  }else if(rx=='g'){
    digitalWrite(10,LOW);
  }else if(rx=='B'){
    digitalWrite(10,HIGH);
  }else if(rx=='b'){
    digitalWrite(11,LOW);
  }
}
