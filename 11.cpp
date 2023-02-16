

// include the library code:
#include <LiquidCrystal.h>
#include <Servo.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Servo myservo;

const int outpin = 9;//servo connection pin
int button1=0;

int pos=45;//position
int pos1=90;//position


void setup() {

  myservo.attach(outpin);
  myservo.write(0);
 
  pinMode(10,INPUT);
  pinMode(13,OUTPUT);// led indication with buzzer
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  

}

void loop() {
  button1=digitalRead(10);//
 
  if(button1==LOW)
  {
  
     myservo.write(pos);
      delay(2000);
     lcd.print("locked\n");
 
    digitalWrite(13,HIGH);
  }
  if(button1==HIGH )
  {
  
  myservo.write(-pos);
  delay(2000);
      lcd.print("Unlocked\n");
 digitalWrite(13,LOW);
  }
 // digitalWrite(13,HIGH);
 
  
   
}