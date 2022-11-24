int th,cds,rx,flag;
float temp;


void setup() {
  Serial.begin(9600);
  flag=0;
}

void loop() {
  th=analogRead(A0); //A/D変換
  cds=analogRead(A1); //A/D変換

  
  temp=25.00;

  rx=Serial.read();
  if(rx=='1') flag=1;
  else if(rx=='0') flag=0;

  if(flag){
    Serial.print(th); //シリアル送信
    Serial.print(',');
    Serial.print(cds);
    Serial.print('\n');
  }
  delay(1000);//1秒まつ
}
