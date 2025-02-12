// C++ code
// /snap/arduino/current/Arduino$
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(10000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
}
