#define sensorB 11
#define sensorA 9
#define IN1 2
#define IN2 4
#define IN3 7
#define IN4 8
#define velocidadeA 3
#define velocidadeB 6
bool estadoA = 0;
bool estadoB = 0;

void setup() {
 pinMode(sensorA , INPUT);
 pinMode(sensorB , INPUT);
 pinMode (IN1 , OUTPUT);
 pinMode (IN2 , OUTPUT);
 pinMode (IN3 , OUTPUT);
 pinMode (IN4 , OUTPUT);
 pinMode (velocidadeA , OUTPUT);
 pinMode (velocidadeB , OUTPUT);
}

void loop() {
   estadoA = digitalRead(sensorA);
   estadoB = digitalRead(sensorB);

   
   if (estadoA == 0){
    digitalWrite(velocidadeA , 100);
    digitalWrite (IN1 , LOW);
    digitalWrite (IN2 , HIGH);  
   }
   else{
    digitalWrite (IN1 , LOW);
    digitalWrite (IN2 , LOW); 
    }


   
   if (estadoB == 0){
    digitalWrite(velocidadeB , 100);
    digitalWrite (IN3 , LOW);
    digitalWrite (IN4 , HIGH);  
   }
   else{
    digitalWrite (IN3 , LOW);
    digitalWrite (IN4 , LOW); 
    }
}
