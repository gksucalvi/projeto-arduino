
#include  <Servo.h>
 Servo peste;
 

void setup() {
peste.attach (5);

}

void loop() {
    peste.write (180);
    delay (1000);
    peste.write (100);
    delay (1000);
}
