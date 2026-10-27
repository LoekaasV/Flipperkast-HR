#include <Servo.h> // <- Servo library 
#include <Wire.h>
#include <LiquidCrystal_I2C.h> // <- 16x2 I2C library 

//Sets the 16x2 display under the name lcd, with adress being 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

String naam = "Player";
String machine = "lv_machine";


/*
  ---PINLAYOUT--- 
  DIGITAL
  2. BTNLEDR
  3. BTNLEDL
  4. IRSENSOR
  5. RESETBTN
  6. IRSENSOREND
  7.
  8.
  9. SERVOL
  10. SERVOR
  11.
  12. BTNL
  13. BTNR

  ANALOG
  A0
  A1
  A2
  A3
  A4 SDA 16xx2
  A5 SCL 16x2
*/
// Declares the servos
Servo ServoL;
Servo ServoR;

//Variables for the servos
int angleL = 0;
int angleR = 0;
bool flippedL = false;
bool flippedR = false;
//Pin variables
#define LEDR 2
#define LEDL 3
#define IRSensor 4
#define ResetBut 5
#define IRSensorEnd 6
#define servoPinL 9
#define servoPinR 10
#define BTNL 12
#define BTNR 13
//Variables for the game / Score
int score = 0;
bool gamerunning = true;
bool scorechange = false;
int scoreincrement = 50;
void setup() {
  pinMode(BTNL, INPUT_PULLUP);
  pinMode(BTNR, INPUT_PULLUP);
  pinMode(ResetBut, INPUT_PULLUP);
  pinMode(LEDL, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(IRSensor, INPUT); 
  pinMode(IRSensorEnd, INPUT);
  ServoL.attach(servoPinL);
  ServoR.attach(servoPinR);
  Serial.begin(9600);

  // Initialize the LCD
  lcd.begin(16, 2);
  // Turn on the backlight and display a score of 0 on the 16x2
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Score:");
  lcd.setCursor(0, 1);
  lcd.print(score);
}

void loop() {
  while(gamerunning){
    //handling for both the left and right flipper. 
    flipperHandling();
    //Detects if the ball passes the flippers
    endingDetection();
    //Makes sure the score changes and to display that new score.
    scoreChanged();
  }
  reset();

}

void flipperHandling(){
  // LEFT SERVO CODE
  // Makes sure the angle changes when you press the button
  int serangleL = ServoL.read();
  ServoL.write(angleL);
  if(digitalRead(BTNL) == LOW){
    if (!flippedL){
      angleL = 80; // <- button is pushed, servoL up
      digitalWrite(LEDL, HIGH); // <- Turn the led on the button on
      if (serangleL == 80){
        delay(150); 
        flippedL = true;
      }
    } else{
      angleL = 0; //Makes the flipper go down again after a short amount of time
    }
  }
  else{
    angleL = 0; //<- button is released, servoL down
    digitalWrite(LEDL, LOW); // <- Turn the led on the button off
    flippedL = false;
  }

  // RIGHT SERVO CODE
  // Makes sure the angle changes when you press the button
  int serangleR = ServoR.read();
  ServoR.write(angleR);
  if(digitalRead(BTNR) == LOW){
    if (!flippedR){
      angleR = 100; // <- button is pushed, servoL up
      digitalWrite(LEDR, HIGH); // <- Turn the led on the button on
      if (serangleR == 100){
        delay(150);
        flippedR = true;
      }
    } else{
      angleR = 180; //Same as left flipper
    }
  }
  else{
    flippedR = false;
    angleR = 180; //<- button is released, servoL down
    digitalWrite(LEDR, LOW); // <- Turn the led on the button off
  }
}

void endingDetection(){
   if (digitalRead(IRSensorEnd) == LOW){ // Check if the pin high or not
      //if the IR sensor detects an object passing by
      gamerunning = false;
      //Sends the score to the flipperboard server using the API
      Serial.print(naam);
      Serial.print(",");
      Serial.print(String(score));
      Serial.print(",");
      Serial.println(machine);
      //Displays the end screen + Final score
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("RIP, Final score:");
      lcd.setCursor(0,1);
      lcd.print(score);
  }
}

void scoreChanged(){
  if (digitalRead(IRSensor) == LOW){ // Check if the pin high or not
      //if the IR sensor detects an object passing by, add scoreincrement to the score.
      if(!scorechange){
        score += scoreincrement;
        scorechange = true;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Score:");
        lcd.setCursor(0, 1);
        lcd.print(score);
      }
    } else{
      scorechange = false;
    }
}

void reset(){
  //Resets the game when you press the reset button.
  if(digitalRead(ResetBut) == LOW){
    // Sets score to 0, displays the score which would be zero, and makes gamerunning true so you can play again.
    gamerunning = true;
    score = 0;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Score:");
    lcd.setCursor(0, 1);
    lcd.print(score);
  }
}