// Dichiaro le variabili utili al programma

int led = 13;
int time = 1000;

// Setup pin

void setup() {

  // Pin in output

  pinMode(led, OUTPUT);

}

// Loop

void loop() {

  // Led acceso

  digitalWrite(led, HIGH);
  delay(time);

  // Led spento

  digitalWrite(led, LOW);
  delay(time);

}
