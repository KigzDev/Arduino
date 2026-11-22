// Dichiarazione pin led

int led1 = 13;
int led2 = 12;
int led3 = 11;

int time = 1000;

// Setup pin

void setup() {

  // Pin output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

// Loop

void loop() {

  // Led 1 acceso

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  delay(time);

  // Led 2 acceso

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);

  delay(time);

  // Led 3 acceso

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);

  delay(time);
  
}