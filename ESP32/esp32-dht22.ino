/**
   ESP32 + DHT22 Example for Wokwi
   
   https://wokwi.com/arduino/projects/322410731508073042
*/

#include "DHTesp.h"

const int DHT_PIN = 15;

DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);
  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);
}

  void loop() {
  TempAndHumidity data = dhtSensor.getTempAndHumidity();
  float temperatura = data.temperature;
  float umidade = data.humidity;

  Serial.println("Temp: " + String(temperatura, 2) + " °C");
  Serial.println("Humidity: " + String(umidade, 1) + " %");

  // Lógica de risco simulada
  if (temperatura > 45 && umidade < 20) {
    Serial.println("⚠️ ALERTA DE RISCO DE ERUPÇÃO ⚠️");
  }

  Serial.println("---");
  delay(2000);
}
