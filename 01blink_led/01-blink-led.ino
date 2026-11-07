const int LED = 17;

void setup() {
  pinMode(LED, OUTPUT);  
}

void loop() {
  digitalWrite(LED, HIGH);  
  delay(500);             
  digitalWrite(LED, LOW);  
  delay(500);              
}