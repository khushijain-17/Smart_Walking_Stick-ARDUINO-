// Define pin numbers for the components
const int trigPin = 12;   // Ultrasonic sensor Trigger pin
const int echoPin = 11;   // Ultrasonic sensor Echo pin
const int buzzerPin = 8;  // Buzzer pin
const int vibrationPin = 9; // Vibration motor pin (NEW)

// Define a threshold distance in centimeters
const int DISTANCE_THRESHOLD = 30; // Buzzer will sound if distance is less than this

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set pin modes
  pinMode(trigPin, OUTPUT); // Trigger pin is an output
  pinMode(echoPin, INPUT);  // Echo pin is an input
  pinMode(buzzerPin, OUTPUT); // Buzzer pin is an output
  pinMode(vibrationPin, OUTPUT); // NEW: Vibration motor pin as output

  // Ensure trigger pin is low initially
  digitalWrite(trigPin, LOW);
  // Ensure buzzer and vibration motor are off initially
  digitalWrite(buzzerPin, LOW);
  digitalWrite(vibrationPin, LOW); // NEW
}

void loop() {
  // Clear the trigPin by setting it LOW for a moment
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin HIGH for 10 microseconds to send a pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the pulse on the echoPin
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  int distanceCm = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.println(" cm");

  // Check if the object is within the threshold
  if (distanceCm < DISTANCE_THRESHOLD && distanceCm > 0) {
    // If within threshold, turn on the buzzer and vibration motor
    tone(buzzerPin, 1000); // Play a tone of 1000 Hz
    digitalWrite(vibrationPin, HIGH); // NEW: Turn on vibration motor
  } else {
    // If not within threshold, turn off buzzer and vibration motor
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW); // NEW: Turn off vibration motor
  }

  // Add a small delay for stable readings
  delay(100);
}
