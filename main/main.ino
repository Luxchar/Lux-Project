/********************************************************
   Utilisation du capteur de son KY-038.
   On tape dans les mains pour allumer ou éteindre la
   LED de l'Arduino.
**********************************************************/

#define capteur 7 // sortie numérique du KY-038 branché à la broche 7 de l'Arduino
int etat = 0; // etat de la LED

void setup() {
  pinMode(capteur, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  if (digitalRead(capteur)) {
    etat = !etat;
    digitalWrite(LED_BUILTIN, etat);
    delay(300);
  }
}
