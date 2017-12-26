// njerig
// Occupancy Sensing
// (works with PIR and reed sensor)

// constants
const int baudRate = 9600;
const int sensorPin = 13;
const int ledPin = 2;

// initialize state vars
int currentOccupancyState = 0;
int lastOccupancyState = 0;

void setup() {
  Serial.begin(baudRate);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("PIR sensor calibrating...");
  delay(5000);
  Serial.println("Done.");
  Serial.println("Motion detection starting now.");
}

void loop() {
  currentOccupancyState = digitalRead(sensorPin);

  if (currentOccupancyState != lastOccupancyState) {
      if (currentOccupancyState == HIGH) {
        Serial.println("occupied");
      } else {
        Serial.println("vacant");
      }
      digitalWrite(ledPin, !currentOccupancyState);   // onboard LED turns on when LOW
  }
  // update last state
  lastOccupancyState = currentOccupancyState;
}
