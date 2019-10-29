void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(13, LOW);
}
