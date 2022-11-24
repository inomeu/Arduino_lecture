int rx;
int red,green,blue;

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  rx=Serial.read();

  if(rx=='R') red=1;
  else if(rx=='r') red=0;
  else if(rx=='G') green=1;
  else if(rx=='g') green=0;
  else if(rx=='B') blue=1;
  else if(rx=='b') blue=0;

  if(red) digitalWrite(9,HIGH);
  if(green) digitalWrite(10,HIGH);
  if(blue) digitalWrite(11,HIGH);

  delay(20);

  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  delay(20);
  }
