// Dichiarazione variabili pin

int led = 13;
int button = 12;

int state;

// Setup pin

void setup() {

  // Pin input/output

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

// Loop

void loop() {

  // Assegnazione stato button

  state = digitalRead(button);

  // Tasto premuto

  if (button == 1) {

    // Led acceso

    digitalWrite(led, HIGH);

  }

  // Tasto non premuto

  else {

    // Led spento

    digitalWrite(led, LOW);

  }

}