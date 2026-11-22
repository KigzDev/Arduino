// Variabili pin

int led1 = 13;
int led2 = 12;

char key; // Variabile valore in input
int time = 1000;

// Setup pin

void setup() {

  // Pin input/output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(key, INPUT);

  Serial.begin(9600); // Inizializzazione monitor seriale

}

// Loop

void loop() {

  // Lettura valore di input

  key = Serial.read();

  // Valore '1'

  if (key == '1') {

    // Led 1 acceso

    digitalWrite(led1, HIGH);
    Serial.println("Led 1 acceso");

    delay(time);

    // Led 1 spento

    digitalWrite(led1, LOW);
    Serial.println("Led 1 spento");
    
    delay(time);

  }

  // Valore '2'

  if (key == '2') {

    // Led 2 acceso

    digitalWrite(led2, HIGH);
    Serial.println("Led 2 acceso");

    delay(time);

    // Led 2 spento

    digitalWrite(led2, LOW);
    Serial.println("Led 2 spento");

    delay(time);

  }

}