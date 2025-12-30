
int MY = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(MY, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(MY, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000); 
    digitalWrite(MY, LOW);    // turn the LED off by making the voltage LOW
    delay(10000);

}
