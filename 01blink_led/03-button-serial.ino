const int LED = 22;
const int BTN = 17;
int lastState = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
  Serial.println("Program started");
}

void loop() {
  int state = digitalRead(BTN);
  digitalWrite(LED, state == LOW);

  if (state != lastState) {
    Serial.println(state == LOW ? "Button pressed - LED ON" : "Button released - LED OFF");
    lastState = state;
  }
  delay(20);
}