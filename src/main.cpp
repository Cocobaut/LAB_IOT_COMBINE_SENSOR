
#include "globals.h"

void setup()
{
  Serial.begin(115200);
  InitWiFi();
  initMQTT();
  initWebserver();

  initDHT20();
  initUltrasonic();
  initLedRGB();
  initMiniMotor();
  initGroundHumidity();
  initLightSensor();
  initRelay();
  initLCD();
}

void loop()
{
  if (!Wifi_reconnect())
  {
    return;
  }
  reconnectMQTT();
  webserverConnect();
}