/*
 * Ultrasonic Simple
 * Prints the distance read by an ultrasonic sensor in
 * centimeters. They are supported to four pins ultrasound
 * sensors (liek HC-SC04) and three pins (like PING)))
 * and Seeed Studio sensors).
 *
 * The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
 *   three pins), attached to digital pins as follows:
 * ---------------------    --------------------
 * | HC-SC04 | Arduino |    | 3 pins | Arduino |
 * ---------------------    --------------------
 * |   Vcc   |   5V    |    |   Vcc  |   5V    |
 * |   Trig  |   12    | OR |   SIG  |   13    |
 * |   Echo  |   13    |    |   Gnd  |   GND   |
 * |   Gnd   |   GND   |    --------------------
 * ---------------------
 * Note: You do not obligatorily need to use the pins defined above
 * 
 * By default, the distance returned by the read()
 * method is in centimeters. To get the distance in inches,
 * pass INC as a parameter.
 * Example: ultrasonic.read(INC)
 *
 * created 3 Apr 2014
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 23 Jan 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 03 Mar 2017
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 * modified 11 Jun 2018
 * by Erick Simões (github: @ErickSimoes | twitter: @AloErickSimoes)
 *
 * This example code is released into the MIT License.
 */

#include <Ultrasonic.h>

/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
/*Pinagem do arduino*/
//motor A
int IN1 = 2 ;
int IN2 = 3 ;
//motor B
int IN3 = 4 ;
int IN4 = 5 ;
//pino velocidade
int velocidadeA = A4;

 
Ultrasonic ultrasonic(12, 10);
int distance;

void setup() {
  Serial.begin(9600);
  //Inicializa Pinos
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
pinMode(velocidadeA , OUTPUT);

}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(0);


    
  //Sentido Horario
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
//Velocidade Alta
analogWrite(velocidadeA,230);
//Intermediaria
analogWrite(velocidadeA,150);
// Velocidade Baixa
analogWrite(velocidadeA,80);
//Freia Motor A
digitalWrite(IN1,HIGH);
digitalWrite(IN2,HIGH);
/*Exemplo de variacao de velocidade no motor B*/
//Sentido Horario
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);

}
