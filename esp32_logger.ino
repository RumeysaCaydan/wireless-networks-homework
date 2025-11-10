#include <WiFi.h>
#include <WebServer.h>

const char* ssid     = "Redmi";
const char* password = "hello123";

WebServer server(80);

void handleLog() {
  if (server.hasArg("value")) {
    String value = server.arg("value");

    // CSV formatında bilgisayara gönder
    Serial.printf("%lu,%s\n", millis(), value.c_str());

    server.send(200, "text/plain", "OK");
  } else {
    server.send(400, "text/plain", "No value");
  }
}

void setup() {
  Serial.begin(115200);
  delay(500);

  WiFi.begin(ssid, password);
  Serial.print("WiFi bağlanıyor");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("\nBağlandı!");
  Serial.print("ESP32 IP: ");
  Serial.println(WiFi.localIP());

  server.on("/log", handleLog);
  server.begin();

  Serial.println("ESP32 HTTP Server Ready!");
}

void loop() {
  server.handleClient();
}
