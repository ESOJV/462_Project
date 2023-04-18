// Define the analog input pin for the moisture sensor
const int sensorPin = A0;

// Define the digital output pin for the motor
const int motorPin = 12;

// Define the threshold value
const int threshold = 500;

void setup() {
  // Set the motor pin as output
  pinMode(motorPin, OUTPUT);

  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the raw analog value from the moisture sensor
  int sensorValue = analogRead(sensorPin);

  // Print the sensor value to the serial monitor
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  // If the sensor value is greater than the threshold, turn on the motor
  if (sensorValue > threshold) {
    digitalWrite(motorPin, HIGH);
    Serial.println("Motor on");
  }
  // Otherwise, turn off the motor
  else {
    digitalWrite(motorPin, LOW);
    Serial.println("Motor off");
  }

  // Wait for 100 milliseconds before reading again
  delay(100);
}
