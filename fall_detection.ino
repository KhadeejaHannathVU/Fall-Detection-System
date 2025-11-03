#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

const int ledPin = 6;     // LED pin
const int buzzerPin = 7;  // Buzzer pin

// Initial fall threshold (tune later)
const float fallThreshold = 1.8; 

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 not connected!");
    while (1);
  }

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.println("Fall Detection System Ready...");
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Convert to g values
  float ax_g = ax / 16384.0;
  float ay_g = ay / 16384.0;
  float az_g = az / 16384.0;

  // Total acceleration magnitude
  float totalAccel = sqrt(ax_g * ax_g + ay_g * ay_g + az_g * az_g);

  // Print all values
  Serial.print("X: ");
  Serial.print(ax_g, 2);
  Serial.print("  Y: ");
  Serial.print(ay_g, 2);
  Serial.print("  Z: ");
  Serial.print(az_g, 2);
  Serial.print("  | Total: ");
  Serial.println(totalAccel, 2);

  // Check threshold (currently using totalAccel, can also use axis-specific later)
  if (totalAccel > fallThreshold) {
    Serial.println("⚠ FALL DETECTED!");

    // Blink LED and sound buzzer 3 times
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);

      // Buzzer sound at 500 Hz
      tone(buzzerPin, 500);  
      delay(400);

      digitalWrite(ledPin, LOW);
      noTone(buzzerPin);     
      delay(400);
    }
  }

  delay(200);
}