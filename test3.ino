const int ss1 =8 ;
const int ss2 =7 ;
const int g1 =6 ;
const int g2 =5 ;
const int r1 =9 ;
const int r2 =3 ;
int x =0 ;
int y =0 ;
void setup()
{
  for (int i=7;i<=8;i++){
  pinMode(i,INPUT);
  }
  pinMode(g1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
}

void loop()
{
  switch (digitalRead(ss1)){
    case 0 :analogWrite(g1,0);
            digitalWrite(r1,LOW);
            break;
    case 1 :analogWrite(g1,128);
            digitalWrite(r1,HIGH);
            break;
}
  switch (digitalRead(ss2)){
    case 0 :analogWrite(g2,0);
            digitalWrite(r2,LOW);
            break;
    case 1 :analogWrite(g2,128);
            digitalWrite(r2,HIGH);
            break;
  }
}