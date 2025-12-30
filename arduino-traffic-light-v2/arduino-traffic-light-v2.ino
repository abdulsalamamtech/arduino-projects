// C++ code
//

int red = 12;
int yellow = 10;
int green = 8;
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
  delay(10000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, HIGH);
  
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);

}
