
int led = 13;
int ledao = 11;
int ledin = 12;

void setup() {
  pinMode( led , OUTPUT);
  pinMode(ledao , OUTPUT);
}

void loop() {
 
digitalWrite( led ,HIGH);
delay (2000);
digitalWrite (led ,LOW);
delay (1000);
digitalWrite ( ledao , HIGH);
delay (1000);
digitalWrite (ledao , LOW);
delay (1000); 
digitalWrite (ledin , HIGH);
delay (2000);
digitalWrite (ledin , LOW);
delay (1000);
}
