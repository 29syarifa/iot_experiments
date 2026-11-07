const int LED = 22;
const int BTN = 17;
bool ledOn = false;
int lastState = HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  int state = digitalRead(BTN);

  if (lastState == HIGH && state == LOW) {
    ledOn = !ledOn;
    digitalWrite(LED, ledOn);
    Serial.println(ledOn ? "LED ON" : "LED OFF");
  }

  lastState = state;
  delay(50);
}