int led1 =4;//pin connection 8 and yellow led 
int led2=7;//pin connection 7 and red led 
int led3=8;//pin connection 4 and green led
int buz = 9;
int water;

void setup() 
{ 
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(buz,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600); 
} 

void loop() 
{ 
 water = analogRead(A0); 
 Serial.print("Pin Value "); 
 if(water<100){
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 noTone(buz);
 }
 else if(water>=100 && water<=500){
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 noTone(buz);
 }
 else if(water>500){
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 tone(buz,1000);
 delay(100);
 }
 
 Serial.println(water); 
 delay(500); 
}
