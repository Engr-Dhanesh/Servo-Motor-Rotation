#include <Servo.h>
Servo servo1;
int pos=0;

void setup(){
  servo1.attach(9);
}
void loop()
{

        servo1.write(180);
  delay(2000);

   servo1.write(0);
  delay(2000);
}