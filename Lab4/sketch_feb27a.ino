/*
int ledPin = 9;
int sensor = A0;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogRead(sensor);
Serial.println(analogRead(sensor));
delay(500);
if (analogRead(sensor) == 0){
  digitalWrite(ledPin,LOW);

}
else if (analogRead(sensor) > 0 && analogRead(sensor) <120)
{
    for (int fadeValue = 0; fadeValue <=255; fadeValue +=5){
    analogWrite(ledPin, fadeValue);
    delay(100);
    }
   for(int fadeValue = 125; fadeValue >=0; fadeValue -=5){
    analogWrite(ledPin, fadeValue);
    delay(100);
  }
}
else if (analogRead(sensor) >= 120 && analogRead(sensor) <=800)
{
  for (int fadeValue = 0; fadeValue <=255; fadeValue +=5){
   analogWrite(ledPin, fadeValue);
   delay(20);
   }
  for(int fadeValue = 255; fadeValue >=0; fadeValue -=5){
    analogWrite(ledPin, fadeValue);
    delay(20);
  }
}
}

*/

int ledPin  = 9;

void setup(){
  Serial.begin(9600);
  }

 void loop()
 {
  int val = analogRead(A0);
  val /=4;
  if (val>255){
    val = 255;    } 
    analogWrite(ledPin, val); 
    delay(30);
 }
 
