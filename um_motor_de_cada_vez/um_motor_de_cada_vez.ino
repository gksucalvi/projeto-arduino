#include <Ultrasonic.h>

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

Ultrasonic ultrasonic(12, 10);// DEFINE PINO 12 TRIG E PINO 10 ECHO 
int distancia;

void setup() {
   Serial.begin(9600);
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
   distancia = ultrasonic.read();
   estadoA = digitalRead(sensorA);
   estadoB = digitalRead(sensorB);
   
  Serial.print("distancia em CM: ");
  Serial.println(distancia);
  delay(0);

  if(distancia == 15){
                      digitalWrite (velocidadeA , 0);
                      digitalWrite (velocidadeB , 0);
                      digitalWrite (IN1 , HIGH);
                      digitalWrite (IN2 , HIGH);
                      digitalWrite (IN3 , HIGH);
                      digitalWrite (IN4 , HIGH);
    
  }

  else if (distancia >15){
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
  
  

   
  
}
