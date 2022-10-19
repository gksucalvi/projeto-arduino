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
   frente();
   delay(1000);
   viraDireita();
   delay(650);
   frente();
   delay(1000);
   viraEsquerda();
   delay(650);
   frente();
   delay(1000);
   viraEsquerda();
   delay(650);
   frente();
   delay(1000);
   viraDireita();
   delay(650);
   
}

void freio (){
           digitalWrite (velocidadeA , 0);
           digitalWrite (velocidadeB , 0);
           digitalWrite (IN1 , HIGH);
           digitalWrite (IN2 , HIGH);
           digitalWrite (IN3 , HIGH);
           digitalWrite (IN4 , HIGH);
    
  }

  void ligaA(){
             analogWrite(velocidadeA , 70);
             digitalWrite (IN1 , LOW);
             digitalWrite (IN2 , HIGH);  
  }
 void desligaA(){
           digitalWrite (IN1 , LOW);
           digitalWrite (IN2 , LOW); 
  }

void ligaB(){
          analogWrite(velocidadeB , 70);
          digitalWrite (IN3 , LOW);
          digitalWrite (IN4 , HIGH);
  }
void desligaB(){
           digitalWrite (IN3 , LOW);
           digitalWrite (IN4 , LOW); 
  }
void viraEsquerda(){
             analogWrite(velocidadeA , 70);
             digitalWrite (IN1 , LOW);
             digitalWrite (IN2 , HIGH);
             digitalWrite (IN3 , LOW);
             digitalWrite (IN4 , LOW); 
  }
void viraDireita(){
          analogWrite(velocidadeB , 70);
          digitalWrite (IN3 , LOW);
          digitalWrite (IN4 , HIGH);
          digitalWrite (IN1 , LOW);
          digitalWrite (IN2 , LOW);       
  }
void frente(){
         ligaA();
         ligaB();
  }

  
