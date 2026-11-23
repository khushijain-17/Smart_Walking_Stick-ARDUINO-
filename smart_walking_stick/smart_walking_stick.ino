#define trigPin 12
#define echoPin 11
#define motor 9
#define buzzer 8
void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(motor, OUTPUT);
pinMode(buzzer,OUTPUT);
}
void loop()
{
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance < 70)// This is where checking the distanceyou can change the value
{
digitalWrite(motor,HIGH); // When the the distance below 100cm
digitalWrite(buzzer,HIGH);
} else
{
digitalWrite(motor,LOW);// when greater than 100cm
digitalWrite(buzzer,LOW);
} delay(500);
}