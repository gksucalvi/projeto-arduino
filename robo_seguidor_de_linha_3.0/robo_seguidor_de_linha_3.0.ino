#include <Ultrasonic.h>

#define sensorB 8
#define sensorA 10
#define corA A0
#define corB A1
int cA;
int cB;
#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4
#define velocidadeA 9
#define velocidadeB 3
bool estadoA = 0;
bool estadoB = 0;


Ultrasonic ultrasonic(12,11);// DEFINE PINO 12 TRIG E PINO 11  ECHO 
int distancia;

void setup() {
   Serial.begin(9600);
 pinMode (corA  , INPUT);
 pinMode (corB  , INPUT);
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
   cA = analogRead(corA);
   cB = analogRead(corB);
    Serial.print("valor cA: ");
   Serial.println(cA);
     delay (00);
    Serial.print("valor cB: ");
   Serial.println(cB);
    delay (0);

   
  Serial.print("distancia em CM: ");
  Serial.println(distancia);
  delay(0);

 if(distancia < 15){
                      digitalWrite (velocidadeA , 0);
                      digitalWrite (velocidadeB , 0);
                      digitalWrite (IN1 , HIGH);
                      digitalWrite (IN2 , HIGH);
                      digitalWrite (IN3 , HIGH);
                      digitalWrite (IN4 , HIGH);
    
  }

  else if (distancia > 15){
        
                                                                 if (estadoA == 0){
                                                              analogWrite(velocidadeA , 70);
                                                              digitalWrite (IN1 , LOW);
                                                              digitalWrite (IN2 , HIGH);  
                                                             }
                                                             else{
                                                              digitalWrite (IN1 , LOW);
                                                              digitalWrite (IN2 , LOW); 
                                                              }
                                                          
                                                          
                                                             
                                                             if (estadoB == 0){
                                                              analogWrite(velocidadeB , 70);
                                                              digitalWrite (IN3 , LOW);
                                                              digitalWrite (IN4 , HIGH);  
                                                             }
                                                             else{
                                                              digitalWrite (IN3 , LOW);
                                                              digitalWrite (IN4 , LOW); 
                                                              }
                                  
                                    }
                                  

                                
                             
}
