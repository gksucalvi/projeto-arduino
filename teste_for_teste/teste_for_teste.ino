
int led = 13;



void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  digitalWrite ( led , LOW);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 1;i<= 3;i++){
  if(i=1){digitalWrite (led , HIGH);
  Serial.println ("1");
  delay (1000);
  }
  if(i = 2){
   
     Serial.println ("2");
    delay (1000);
      
    }
   if(i = 3){
    digitalWrite ( led , LOW);
     Serial.println ("3");
    delay (1000);
      i = 1;
    }

}
}
