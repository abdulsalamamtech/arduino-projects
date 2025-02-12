// C++ code
//

int red = 7;
int yellow = 6;
int green = 5;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, HIGH);
  
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  digitalWrite(yellow, HIGH);
}
