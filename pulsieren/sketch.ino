#define RED 11
#define GREEN 10
#define BLUE 9

float azeit = 0; // Aktuelle Zeit
float zeit = 0.4; // Zeitintervall
int isOn = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT); // Pin 3 ist ein Ausgang.
  pinMode(GREEN, OUTPUT); // Pin 3 ist ein Ausgang.
  pinMode(BLUE, OUTPUT); // Pin 3 ist ein Ausgang.

  Serial.println("Eingabe:");
}

void loop() {
  // put your main code here, to run repeatedly:  
  if (Serial.available() > 0) {
    String eingabe = Serial.readString(); // für die Eingabe
    eingabe.trim();
    eingabe.toUpperCase();
    if (eingabe == "ON") {
      isOn = 1;
    } else if (eingabe == "OFF") {
      isOn = 0;
      azeit = 0; // setz die Zeit zurück
    }
  }

  if (isOn == 1) // wenn man "ON" eingegeben hat
  {
    analogWrite(RED,255); //ROT: #ff0000
    analogWrite(GREEN,0);
    analogWrite(BLUE,0);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);
    Serial.print("Farbe: "); 
    Serial.println("Rot");
    delay(400);

    analogWrite(RED,255); //ORANGE: #ffa500
    analogWrite(GREEN,100);
    analogWrite(BLUE,0);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Orange");  
    delay(400);

    analogWrite(RED,255); //GELB: #ffff00
    analogWrite(GREEN,255);
    analogWrite(BLUE,0);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Gelb");  
    delay(400);

    analogWrite(RED,0); //GRÜN: #00ff00
    analogWrite(GREEN,255);
    analogWrite(BLUE,0);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Grün");  
    delay(400);

    analogWrite(RED,0); //CYAN: #00ffff
    analogWrite(GREEN,225);
    analogWrite(BLUE,255);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Cyan");  
    delay(400);

    analogWrite(RED,0); //BLAU: #0000ff
    analogWrite(GREEN,0);
    analogWrite(BLUE,255);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Blau");  
    delay(400);

    analogWrite(RED,255); //VIOLET: #a020f0
    analogWrite(GREEN,0);
    analogWrite(BLUE,255);
    Serial.println("+++++++++++++++++++");
    Serial.print("zeit: "); 
    Serial.println(azeit = azeit + zeit);   
    Serial.print("Farbe: "); 
    Serial.println("Violet");  
    delay(400);
  }
}
