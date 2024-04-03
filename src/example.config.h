/*
 * Example config.h
 */

#ifndef CONFIG_H
#define CONFIG_H

// Unique client ID for this device
#define client_id "unique_device_id"

// WiFi Settings
#define wifi_ssid "YourWiFiSSID"
#define wifi_password "YourWiFiPassword"

// MQTT Broker Settings
#define mqtt_broker IPAddress(192, 168, 1, 2) // Use the IP address of your MQTT broker
#define mqtt_port 1883 // Common MQTT port, change if yours is different

// MQTT Topics
#define in_topic "your/in/topic" // Topic to subscribe to for incoming messages
#define out_topic "your/out/topic" // Topic to publish messages to

#endif