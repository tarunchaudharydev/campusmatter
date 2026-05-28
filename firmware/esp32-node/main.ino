#include <WiFi.h>

void setup()
{
  Serial.begin(115200);

  WiFi.begin("SSID", "PASSWORD");

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting...");
  }

  Serial.println("Connected to WiFi");
}

void loop()
{
}