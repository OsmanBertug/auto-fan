int sag=7;
int sol=10;
int lm35=A1;
float deger;
float sic;

void setup() {
 pinMode (sag,OUTPUT);
 pinMode (sol,OUTPUT);
 pinMode(lm35,INPUT);
  Serial.begin(9600);
}

void loop() {
deger=analogRead(lm35);
sic=deger/2;
Serial.println(sic);
delay(1000);
if(sic>35){
  digitalWrite (sag,HIGH);
digitalWrite (sol,LOW);
  
}
else{
 digitalWrite (sag,LOW);
digitalWrite (sol,LOW);   
}
}
