/*int A0Pin = 12;
int A1Pin = 11;
int B0Pin = 10;
int B1Pin = 9;

int LED0Pin = 5;
int LED1Pin = 4;
int LED2Pin = 3;

void setup()
{
  pinMode(A0Pin, INPUT);
  pinMode(A1Pin, INPUT);
  pinMode(B0Pin, INPUT);
  pinMode(B1Pin, INPUT);

  pinMode(LED0Pin, OUTPUT);
  pinMode(LED1Pin, OUTPUT);
  pinMode(LED2Pin, OUTPUT);
}

void loop()
{
  int b1Value = digitalRead(A0Pin);
  int b2Value = digitalRead(A1Pin);
  int b3Value = digitalRead(B0Pin);
  int b4Value = digitalRead(B1Pin);

  digitalWrite(LED0Pin, LOW);
  digitalWrite(LED1Pin, LOW);
  digitalWrite(LED2Pin, LOW);

  if (b1Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if (b2Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if (b3Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if (b4Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b3Value == HIGH )
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b2Value == HIGH && b4Value == HIGH )
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
  if(b2Value == HIGH && b3Value == LOW && b4Value == LOW)
  {
   digitalWrite(LED0Pin,LOW);
   digitalWrite(LED1Pin,HIGH);
   digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == LOW && b2Value == LOW && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b2Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b3Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b2Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
   }
  if(b2Value == HIGH && b4Value == HIGH && b2Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }  
  if(b1Value == HIGH && b2Value == HIGH && b3Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
   if(b3Value == HIGH && b4Value == HIGH && b1Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
  if(b1Value == HIGH && b2Value == 
     HIGH && b3Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,HIGH);
  }
  delay(10);
}

int button_1 = 12; 
int button_2 = 11; 
int button_3 = 10; 
int button_4 = 9; 
int led_1 = 5; 
int led_2 = 4; 
int led_3 = 3; 

int a0,b0,a1,b1, x1,x2,x3,x4,x5; 
int res_1, res_2, res_3; 

void setup() { 
// put your setup code here, to run once: 
pinMode(led_1 , OUTPUT); 
pinMode(led_2 , OUTPUT); 
pinMode(led_3 , OUTPUT); 

pinMode (button_1, INPUT); 
pinMode (button_2, INPUT); 
pinMode (button_3, INPUT); 
pinMode (button_4, INPUT); 
} 

int xor_x(int a, int b){ 
if (a == b){ 
return 0; 
}else return 1; 
} 


int and_x (int a, int b){ 
if (a == 1 && b == 1){ 
return 1;} 
else return 0; 
} 

int or_x (int a, int b){ 
if(a == 0 && b == 0){ 
return 0; 
} else return 1; 
} 

void loop() { 
// put your main code here, to run repeatedly: 
if (digitalRead(button_1) == HIGH){ 
a0 = 1; 
}else a0 = 0; 
if (digitalRead(button_2) == HIGH){ 
b0 = 1; 
}else b0 = 0; 
if (digitalRead(button_3) == HIGH){ 
a1 = 1; 
}else a1 = 0; 
if (digitalRead(button_4) == HIGH){ 
b1 = 1; 
}else b1 = 0; 
res_1 = xor_x(a0, b0); 

res_2 = xor_x(and_x(a0,b0), xor_x(a1,b1)); 
res_3 = or_x(and_x(and_x(a0,b0), xor_x(a1,b1)),and_x(a1,b1)); 

if(res_1 == 1)
{ 
digitalWrite(led_1, HIGH);
} 

else 
digitalWrite(led_1, LOW); 
if(res_2 == 1)
{ 
digitalWrite(led_2, HIGH);
} 
else 
digitalWrite(led_2, LOW); 

if(res_3 == 1)
{ 
digitalWrite(led_3, HIGH);
} 
else digitalWrite(led_3, LOW); 
}
*/

int g = 5;
int r = 4;
int y = 3;

int b1 = 12;
int b2 = 11;
int b3 = 10;
int b4 = 9;


void setup() 
{
pinMode(g, OUTPUT);
pinMode(r, OUTPUT); 
pinMode(y, OUTPUT); 


pinMode(b1, INPUT); 
pinMode(b2, INPUT); 
pinMode(b3, INPUT); 
pinMode(b4, INPUT); 
} 

//compulsory loop procedure, runs after setup() 
void loop() 
{


int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0; 

if (digitalRead(b1) == LOW && digitalRead(b2) == HIGH)
{
  p1 = 1;   
}

if (digitalRead(b2) == LOW && digitalRead(b1) == HIGH)
{
  p1 = 1;   
}



if (digitalRead(b1) == HIGH && digitalRead(b2) == HIGH)
{
  p2 = 1;   
}


if (digitalRead(b3) == LOW && digitalRead(b4) == HIGH)
{
  p3 = 1;   
}

if (digitalRead(b4) == LOW && digitalRead(b3) == HIGH)
{
  p3 = 1;   
}

if (p2 == 1 && p3 == 0)
{
  p4 = 1;   
}

if (p3 == 1 && p2 == 0)
{
  p4 = 1;   
}

if (p2 == 1 && p3 == 1)
{
  p5 = 1;   
}

if (digitalRead(b4) == HIGH && digitalRead(b3) == HIGH)
{
  p6 = 1;   
}

if (p5 == 1 || p6 == 1)
{
  p7 = 1;   
}


int check = 0;


if (p1 == 1 && p4 == 1 && p7 == 1)
{ 
digitalWrite(g, HIGH); //red led to is on now 
digitalWrite(r, HIGH); //red led to is on now 
digitalWrite(y, HIGH); //red led to is on now 
delay(100);
digitalWrite(g, LOW); //turning led off 
digitalWrite(r, LOW); //turning led off 
digitalWrite(y, LOW); //turning led off  
check = 1;
}

if (check == 0){
if (p1 == 1 && p4 == 1)
{ 
digitalWrite(g, HIGH); //red led to is on now 
digitalWrite(r, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(g, LOW); //turning led off 
digitalWrite(r, LOW); //turning led off 
}
if (p4 == 1 && p7 == 1)
{ 
digitalWrite(r, HIGH); //red led to is on now 
digitalWrite(y, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(r, LOW); //turning led off
digitalWrite(y, LOW); //turning led off 
 
}
if (p7 == 1 && p1 ==  1)
{ 
digitalWrite(g, HIGH); //red led to is on now 
digitalWrite(y, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(g, LOW); //turning led off
digitalWrite(y, LOW); //turning led off 

}
check = 1;
}
if (check == 0) {
if (p1 == 1)
{ 
digitalWrite(g, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(g, LOW); //turning led off 

}
if (p4 == 1)
{ 
digitalWrite(r, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(r, LOW); //turning led off 

}
if (p7 == 1)
{ 
digitalWrite(y, HIGH); //red led to is on now 
delay(100); //red led continue flashing for 3 seconds 
digitalWrite(y, LOW); //turning led off 

}
}
check = 0;
}
