#include <WiFi.h>
#include <WebServer.h>
#include <HardwareSerial.h>

HardwareSerial CoreSerial(2);
WebServer server(80);


const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASS";


void sendCommand(String cmd) {
  CoreSerial.println(cmd);
}

void handleRoot() {
  server.send(200, "text/html",
  "<h1>Forge Core</h1>"
  "<button onclick=\"fetch('/on')\">ON</button>"
  "<button onclick=\"fetch('/off')\">OFF</button>");
}

void handleOn() {
  sendCommand("LED_ON");
  server.send(200, "text/plain", "ON");
}

void handleOff() {
  sendCommand("LED_OFF");
  server.send(200, "text/plain", "OFF");
}

// ===== SETUP =====
void setup() {
  Serial.begin(115200);
  CoreSerial.begin(9600, SERIAL_8N1, 16, 17);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) delay(500);

  server.on("/", handleRoot);
  server.on("/on", handleOn);
  server.on("/off", handleOff);
  server.begin();

  Serial.println("Lunimo Uno is Online");
}


void loop() {
  server.handleClient();

  // Read responses from ATmega
  if (CoreSerial.available()) {
    String msg = CoreSerial.readStringUntil('\n');
    Serial.println("Core RX: " + msg);
  }
}