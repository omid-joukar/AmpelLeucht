void setup() {
  // put your setup code here, to run once:

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}
void loop()
{
digitalWrite(13, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(13, LOW);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(12, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(12, LOW);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(11, HIGH);
delay(1000); // Wait for 1000 millisecond(s)
digitalWrite(11, LOW);
delay(1000); // Wait for 1000 millisecond(s)
}
