const int LED = 22;
const int BTN = 17;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  digitalWrite(LED, digitalRead(BTN) == LOW);
}