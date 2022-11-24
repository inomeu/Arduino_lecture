void setup() {
  pinMode(1,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(1,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);

  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
