


int RED = 12;
int YELLOW = 10;
int GREEN = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  
}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:  
 

  // RED
  digitalWrite(RED, HIGH);   // turn the LED on (HIGH is the voltage level),
  delay(10000);  // wait for 10 seconds
  digitalWrite(RED, LOW);    // turn the LED off by making the voltage LOW


  // YELLOW
  digitalWrite(YELLOW, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000); // wait for 5 seconds
  digitalWrite(YELLOW, LOW);    // turn the LED off by making the voltage LOW


  // GREEN
  digitalWrite(GREEN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000); // wait for 10 seconds
  digitalWrite(GREEN, LOW);    // turn the LED off by making the voltage LOW
}
