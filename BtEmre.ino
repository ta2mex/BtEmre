int HC06;
void setup()
{
Serial.begin(9600);  
for (int pinler=2;pinler<=8;pinler++)
{
pinMode(pinler,OUTPUT);
}
}
void loop()
{
if(Serial.available()) 
{
int HC06 = Serial.read();
delay(100);
Serial.print("Okunan Veri=");
Serial.println(HC06);
if(HC06==65){digitalWrite(2,HIGH);} 
if(HC06==97){digitalWrite(2,LOW);}
if(HC06==66){digitalWrite(3,HIGH);}
if(HC06==98){digitalWrite(3,LOW);}
if(HC06==67){digitalWrite(4,HIGH);}
if(HC06==99){digitalWrite(4,LOW);}
if(HC06==68){digitalWrite(5,HIGH);}
if(HC06==100){digitalWrite(5,LOW);}
if(HC06==69){digitalWrite(6,HIGH);}
if(HC06==101){digitalWrite(6,LOW);}
if(HC06==70){digitalWrite(7,HIGH);}
if(HC06==102){digitalWrite(7,LOW);}
if(HC06==71){digitalWrite(8,HIGH);}
if(HC06==103){digitalWrite(8,LOW);}


}}

