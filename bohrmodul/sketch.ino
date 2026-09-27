#define bohrerDrehen 9
#define bohrerSenken A1
#define bohrerHeben A2
#define statusLED A3
#define SPS 2
#define lichtschrankeWerkstueck 3


void setup() {
  pinMode(bohrerDrehen, OUTPUT);
  pinMode(bohrerSenken, OUTPUT);
  pinMode(bohrerHeben, OUTPUT);
  pinMode(statusLED, OUTPUT);
  pinMode(SPS, INPUT_PULLUP);
  pinMode(lichtschrankeWerkstueck, INPUT_PULLUP);

  digitalWrite(bohrerDrehen, LOW);
  digitalWrite(bohrerHeben, LOW);
  digitalWrite(bohrerSenken, LOW);
  digitalWrite(statusLED, LOW);

  Serial.begin(9600);
  while (!Serial)
    ;

  Serial.println("Enter an integer number:");
}

void loop() {
  
  verarbeiteUART();
   if (digitalRead(SPS) == LOW && digitalRead(lichtschrankeWerkstueck) == LOW) {
     analogWrite(bohrerDrehen, 191);
     digitalWrite(bohrerSenken, HIGH);
     digitalWrite(statusLED, HIGH);
     delay(5000);
  
     digitalWrite(bohrerSenken, LOW);
     digitalWrite(bohrerHeben, HIGH);
     delay(5000);
  
     digitalWrite(bohrerHeben, LOW);
     analogWrite(bohrerDrehen, 0);
     digitalWrite(statusLED, LOW);

     while (digitalRead(SPS) == LOW || digitalRead(lichtschrankeWerkstueck) == LOW);
   }
}

void verarbeiteUART() {
  if (Serial.available()) {
    int number = Serial.parseInt();
    if (number >= 0 && number <= 100) {
      Serial.println("OK");
    } else {
      Serial.println("NOK");
    }
  }
}
