// Define the analog input pin for the sensor
const int sensorPin = A0;

// Define the digital output pin for the LED
const int ledPin = 13;

// Define the threshold value
const int threshold = 500;

void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the raw analog value from the sensor
  int sensorValue = analogRead(sensorPin);

  // Print the sensor value to the serial monitor
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  // If the sensor value is greater than the threshold, turn on the LED
  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED on");
  }
  // Otherwise, turn off the LED
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("LED off");
  }

  // Wait for 100 milliseconds before reading again
  delay(100);
}
