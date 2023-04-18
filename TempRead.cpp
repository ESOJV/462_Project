// Define the analog input pin for the temperature sensor
const int tempSensorPin = A0;

void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the raw analog value from the temperature sensor
  int sensorValue = analogRead(tempSensorPin);

  // Convert the raw value to temperature in Celsius
  float temperature = (sensorValue * 5.0 / 1023.0 - 0.5) * 100.0;

  // Print the temperature value to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  // Wait for 1 second before reading again
  delay(1000);
}
