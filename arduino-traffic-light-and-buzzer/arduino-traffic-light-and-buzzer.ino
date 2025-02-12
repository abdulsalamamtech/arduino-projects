


int RED = 4;
int YELLOW = 3;
int GREEN = 2;
int BUZ = 1;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUZ, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);    
  // wait for a second

  // RED
  digitalWrite(RED, HIGH);   // turn the LED on (HIGH is the voltage level),
  delay(10000); 
  digitalWrite(RED, LOW);    // turn the LED off by making the voltage LOW


  // YELLOW
  digitalWrite(YELLOW, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000); 
  digitalWrite(YELLOW, LOW);    // turn the LED off by making the voltage LOW


  // GREEN
  digitalWrite(GREEN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(BUZ, HIGH); 
  delay(10000); 
  digitalWrite(GREEN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(BUZ, LOW); 
  
}
