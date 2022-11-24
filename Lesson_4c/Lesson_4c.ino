int rx;
int red,green,blue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  rx=Serial.read();

  if(rx=='R') red+=32;
  else if(rx=='r') red-=32;
  else if(rx=='G') green+=32;
  else if(rx=='g') green-=32;
  else if(rx=='B') blue+=32;
  else if(rx=='b') blue-=32;
  
  analogWrite(9,red);
  analogWrite(10,green);
  analogWrite(11,blue);
  }
