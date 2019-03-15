int led_red = 8;
int led_yel = 9;
int led_green = 10;
int button = 2;

void setup() 
{
pinMode(led_red, OUTPUT);
pinMode(led_yel, OUTPUT);
pinMode(led_green, OUTPUT);
}

void loop() 
{

  if (digitalRead(button) == HIGH)
  {
    
   digitalWrite(led_yel, HIGH);
   digitalWrite(led_green, HIGH);
   delay(40);
    digitalWrite(led_yel, LOW);
    digitalWrite(led_green, LOW);
   }
   else{
   digitalWrite(led_green, HIGH);
   delay(40);
   digitalWrite(led_green, LOW);

  
    for (int i = 0; i<3; i++)
   {
   digitalWrite(led_green, HIGH);
   delay(300);
   digitalWrite(led_green, LOW);
   delay(300);
   }

  digitalWrite(led_yel, HIGH);
  delay(100);
  digitalWrite(led_yel, LOW);


   
  digitalWrite(led_red, HIGH);
  delay(40);
  digitalWrite(led_red, LOW);
   

 delay(10); 
   }
}
