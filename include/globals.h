#ifndef GLOBALS_H
#define GLOBALS_H

// include libraries
#include <Wire.h>
#include <WiFi.h>
#include <DHT20.h>
#include <PubSubClient.h>
#include <Ultrasonic.h>
#include <string.h>
#include <WebServer.h>
#include <Adafruit_NeoPixel.h>
#include <PIR.h>
#include <LiquidCrystal_I2C.h>

// Connect
#include "../src/connect/TaskWifi.h"
#include "../src/connect/TaskMQTT.h"
#include "../src/connect/Webserver.h"

// Device
#include "../src/device/TaskDHT20.h"
#include "../src/device/TaskDistance.h"
#include "../src/device/TaskLedRGB.h"
#include "../src/device/TaskMiniMotor.h"
#include "../src/device/TaskGroundHumidity.h"
#include "../src/device/TaskLightSensor.h"
#include "../src/device/TaskRelay.h"
#include "../src/device/TaskLCD.h"
#endif