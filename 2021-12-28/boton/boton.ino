#define BOTON_PIN 23
#define LED_PIN 22

void setup() {
  pinMode(BOTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

int valor;

void loop() {
  valor = digitalRead(BOTON_PIN);
  Serial.println(valor);
  digitalWrite(LED_PIN, valor);
}
