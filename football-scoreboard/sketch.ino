#include <Wire.h> // Wire Bibliothek einbinden
#include <LiquidCrystal_I2C.h> // LiquidCrystal_I2C Bibliothek einbinden
#define Button1 2
#define Button2 3
LiquidCrystal_I2C lcd(0x27, 16, 2); //Init LCD: Adresse, Zeichen pro Zeile, Anzahl Zeilen

  int sekunden;
  int minuten;

  int heimTor;
  int gaesteTor;

void setup() {
 lcd.init(); //Im Setup wird der LCD gestartet 
 lcd.backlight(); //Hintergrundbeleuchtung einschalten 
 pinMode(Button1, INPUT_PULLUP);
 pinMode(Button2, INPUT_PULLUP);
 attachInterrupt(0, tor1, FALLING);
 attachInterrupt(1, tor2, FALLING);
}

void loop()
{
   if (digitalRead(Button1) == LOW){
      tor1();
  }  
  
 if (digitalRead(Button2) == LOW){
      tor2();
   }
   
  delay(1000);
  sekunden++;

  if(sekunden == 60)
  {
    sekunden = 0;
    minuten++;
  }
 lcdZeitausgabe();

 lcdSpielstandanzeige();
}

void tor1() {
    heimTor++;
  }

void tor2() {
    gaesteTor++;
  }
  
void lcdZeitausgabe()
{
  lcd.setCursor(0, 0); //Der blinkende Cursor wird auf Zeile/Spalte 0 gesetzt
  lcd.print("Zeit: " );
  lcd.print(minuten);  

  lcd.print(" : ");

  if(sekunden <= 9)  // Für die Sekunden 0-9 damit zwei zeichen für die Sekunden angezeigt werden(Beispiel: 00:01)
  {
     lcd.print("0");
  }

  lcd.print(sekunden);
}
  
void lcdSpielstandanzeige() 
{
  lcd.setCursor(0, 1); 
  lcd.print("Stand: ");
  lcd.print(heimTor);
  lcd.print(" : ");
  lcd.print(gaesteTor);
}
