#define LED PA0
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void executeCommand(String cmd) {
  if (cmd == "LED_ON") {
    digitalWrite(LED, HIGH);
    Serial.println("OK:LED_ON");
  }
  else if (cmd == "LED_OFF") {
    digitalWrite(LED, LOW);
    Serial.println("OK:LED_OFF");
  }
  else {
    Serial.println("ERR:SOMTHING IS WRONG");
  }
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    executeCommand(cmd);
  }
}