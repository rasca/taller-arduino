#define POTE_PIN 36
#define LED_PIN 22

void setup() {
  pinMode(POTE_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

int valor;

void loop() {
  valor = analogRead(POTE_PIN);
  Serial.println(valor);
  digitalWrite(LED_PIN, HIGH);
  delay(valor);
  digitalWrite(LED_PIN, LOW);
  delay(valor);
}
