# sos-sensor-node

This repository's code is part of [S.O.S., a Shower/Stall Occupancy System](https://njerig.me/projects/sos).

## Electronics

### Parts List
- WeMos D1 Mini v2
- PIR sensor
- Reed sensor
- 5V micro USB plug

### Circuit Diagrams
#### Shower Sensor Node
<img width="985" alt="Screen Shot 2024-04-03 at 1 39 03 AM" src="https://github.com/njerig/sos-sensor-node/assets/5789314/7a9a1b6f-3c7b-4c65-b6e1-b597bd82d727">


#### Toilet Stall Sensor Node
<img width="983" alt="Screen Shot 2024-04-03 at 1 34 20 AM" src="https://github.com/njerig/sos-sensor-node/assets/5789314/879c2819-cb8b-4a7b-ac43-e7bb3451d181">

## Software

This code was made in and should be uploaded to the ESP8266 via the Arduino IDE.

## Setup

1. **Install an MQTT broker (e.g. Mosquitto).** Make sure the daemon is running before step 6.
2. **Install the Arduino IDE**: Ensure you have this program set up on your computer to compile and upload the code in this repository.
3. **Install required libraries**:
   - `ESP8266WiFi`
   - `Ticker`
   - `AsyncMqttClient`
   - `SoftwareSerial`
4. **Configure the project**:
   - Rename `example.config.h` to `config.h`.
   - Open `config.h`and update it with your WiFi credentials, MQTT broker details, and topics.
5. **Set up the circuit** according to the diagrams above.
6. **Upload the code**:
   - Open `occupancy-sensing.ino` with the Arduino IDE.
   - Select your ESP8266 board under `Tools > Board`.
   - Compile and upload the code to your ESP8266.
7. **Monitor and test**:
   - Open the Serial Monitor in the Arduino IDE to view debug messages.
   - Verify the device connects to WiFi and the MQTT broker.
   - Test occupancy detection functionality.