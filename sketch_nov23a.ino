
int AE=50; int AD=51; int AC=52; int AP=53; int AB=22; int AA=23; int AF=24; int AG=25;
int BP=49; int BC=48; int BD=47; int BE=46; int BB=27; int BA=26; int BF=29; int BG=28;
int CP=45; int CC=44; int CD=43; int CE=42; int CB=31; int CA=30; int CF=33; int CG=32;
int DP=41; int DC=40; int DD=39; int DE=38; int DB=2; int DA=3; int DF=37; int DG=5;
void setup() {
pinMode(AE, OUTPUT); pinMode(AD, OUTPUT); pinMode(AC, OUTPUT);
pinMode(AA, OUTPUT); pinMode(AB, OUTPUT); pinMode(AF, OUTPUT); 
pinMode(AG, OUTPUT); pinMode(AP, OUTPUT); 
pinMode(BE, OUTPUT); pinMode(BD, OUTPUT); pinMode(BC, OUTPUT);
pinMode(BA, OUTPUT); pinMode(BB, OUTPUT); pinMode(BF, OUTPUT); 
pinMode(BG, OUTPUT); pinMode(BP, OUTPUT); 
pinMode(CE, OUTPUT); pinMode(CD, OUTPUT); pinMode(CC, OUTPUT);
pinMode(CA, OUTPUT); pinMode(CB, OUTPUT); pinMode(CF, OUTPUT); 
pinMode(CG, OUTPUT); pinMode(CP, OUTPUT); 
pinMode(DE, OUTPUT); pinMode(DD, OUTPUT); pinMode(DC, OUTPUT);
pinMode(DA, OUTPUT); pinMode(DB, OUTPUT); pinMode(DF, OUTPUT); 
pinMode(DG, OUTPUT); pinMode(DP, OUTPUT); 





}
void loop() {
int minute = 5;
int second = 0;
int finish = 1;


Led_Write(minute / 10,AA,AB,AC,AD,AE,AF,AG,AP);
Led_Write(minute % 10,BA,BB,BC,BD,BE,BF,BG,BP);
Led_Write(second / 10,CA,CB,CC,CD,CE,CF,CG,CP);
Led_Write(second % 10,DA,DB,DC,DD,DE,DF,DG,DP);
delay(1000);
minute = minute - 1;
int bol_sec = 5;
int bolum = minute / 10 ;
int mod = minute % 10 ;
Led_Write(bolum,AA,AB,AC,AD,AE,AF,AG,AP);

while (minute >= 0){


  Led_Write(mod,BA,BB,BC,BD,BE,BF,BG,BP);
  Led_Write(bol_sec,CA,CB,CC,CD,CE,CF,CG,CP);
  if(finish == 1) {
  for(int i = 9; i>-1; i--){
    if(i > -1){
    
    Led_Write(i,DA,DB,DC,DD,DE,DF,DG,DP);
    delay(1000);
    }
    if(i == 0){
      if(bol_sec != 0){
        bol_sec = bol_sec - 1;
        Led_Write(bol_sec,CA,CB,CC,CD,CE,CF,CG,CP);
      }
      else if (bol_sec == 0){
        if(mod != 0) {
        mod = mod - 1 ;
        bol_sec = 5;
        Led_Write(mod,BA,BB,BC,BD,BE,BF,BG,BP);
        } 
        else {
          
          if(bolum != 0) {
          bolum = bolum - 1;
          mod = 9;
          bol_sec = 5 ;
          Led_Write(bolum,AA,AB,AC,AD,AE,AF,AG,AP);
          Led_Write(mod,BA,BB,BC,BD,BE,BF,BG,BP);
          }
          else {
            Led_Write(mod,CA,CB,CC,CD,CE,CF,CG,CP);
            if(mod == 0) {
            minute = 0;
            
            Led_Write(minute,AA,AB,AC,AD,AE,AF,AG,AP);
            Led_Write(minute,BA,BB,BC,BD,BE,BF,BG,BP);
            Led_Write(minute,CA,CB,CC,CD,CE,CF,CG,CP);
            Led_Write(minute,DA,DB,DC,DD,DE,DF,DG,DP);
            delay(1000);
            finish = 0;
            
            }
            
          }
        }
       
      }
    }
    

  }  }


}






}

void Led_Write(int number,int a,int b, int c , int d , int e , int f, int g, int p){

switch(number){

case 0:
digitalWrite(e,HIGH);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,LOW);
break; 
case 1:
digitalWrite(e,LOW);
digitalWrite(d,LOW); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,LOW); 
digitalWrite(f,LOW); 
digitalWrite(g,LOW);
break; 
case 2:
digitalWrite(e,HIGH);
digitalWrite(d,HIGH); 
digitalWrite(c,LOW); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,LOW); 
digitalWrite(g,HIGH);
break; 
case 3:
digitalWrite(e,LOW);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,LOW); 
digitalWrite(g,HIGH);
break;
case 4:
digitalWrite(e,LOW);
digitalWrite(d,LOW); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,LOW); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH);
break;
case 5:
digitalWrite(e,LOW);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,LOW); 
digitalWrite(a,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH);
break;
case 6:
digitalWrite(e,HIGH);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,LOW); 
digitalWrite(a,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH);
break;
case 7:
digitalWrite(e,LOW);
digitalWrite(d,LOW); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,LOW); 
digitalWrite(g,LOW);
break;
case 8:
digitalWrite(e,HIGH);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH);
break;
case 9:
digitalWrite(e,LOW);
digitalWrite(d,HIGH); 
digitalWrite(c,HIGH); 
digitalWrite(b,HIGH); 
digitalWrite(a,HIGH); 
digitalWrite(f,HIGH); 
digitalWrite(g,HIGH);
break;

}




}


