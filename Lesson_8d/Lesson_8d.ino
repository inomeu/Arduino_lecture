//一番下が何個光っているか

unsigned int i,x,line=0;
int rx,num=0;
char col=0,row=0,bar;
const char pin_col[5]={13,3,10,7,8};
const char pin_row[7]={12,11,2,9,4,5,6};
const char col_table[8]={0,1,2,3,4,3,2,1};
const char row_table[12]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02};
const char bar_table[6]={0x03,0x06,0x0c,0x18,0x30,0x60};

void setup() {
  for(i=0;i<5;i++) pinMode(pin_col[i],OUTPUT);
  for(i=0;i<7;i++) pinMode(pin_row[i],OUTPUT);
}

void loop() {
  unsigned int wk=line%5;

    for(i=0;i<5;i++) digitalWrite(pin_col[i],LOW);
    for(i=0;i<7;i++) digitalWrite(pin_row[i],HIGH);

  digitalWrite(pin_col[wk],HIGH);

  if(wk==col_table[col]){//ボール
    for(i=0;i<7;i++){
      if(row_table[row]&(0x01<<i)){
        digitalWrite(pin_row[i],LOW);
      }
    }
  }

  if(wk==4){//バーを一列に固定
    for(i=0;i<7;i++){
      if(bar_table[bar]&(0x01<<i)){
        digitalWrite(pin_row[i],LOW);
      }
    }
  }

  x=digitalRead(pin_row[i]);
  if(x<3){
 
  }
  
  line++;
  delay(1);

  bar=analogRead(A0)/171;

  if(!(line%256)){
    if(col==7) col=0;
    else       col++;
    if(row==11) row=0;
    else        row++;
  }
}
