#include <LiquidCrystal.h>

// LCD pins: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(11, 2, 3, 4, 5, 6);

// Ultrasonic sensor pins
const int trigPin = 8;
const int echoPin = 9;

// Variables for duration and distance
long duration;
int distance;

void setup() {
  // Initialize LCD
  lcd.begin(16, 2);
  lcd.print("Distance measure");
  lcd.setCursor(0, 1);
  lcd.print("using UltraSonic");
  //lcd.print("");
  delay(5000);

  // Initialize ultrasonic pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Clear LCD and prepare for distance display
  lcd.clear();
  lcd.print("Distance:");
}

void loop() {
  // Send a 10µs pulse to trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance (in cm)
  distance = duration * 0.034 / 2;

  // Display on LCD
  lcd.setCursor(0, 1);
  lcd.print("   "); // clear old values
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm  ");

  delay(500);
}
