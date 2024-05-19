#include <Servo.h>

#define SERVO01_PIN 9
#define DELAY_SERVO 30
Servo servo1;
int pos = 0;
void setup()
{
  // put your setup code here, to run once:
  servo1.attach(SERVO01_PIN);
}

void loop()
{
  // put your main code here, to run repeatedly:
for (pos = 0; pos <= 180; pos += 1)
  {
  servo1.write(pos);
  delay(DELAY_SERVO);
  }
for (pos = 180; pos <= 180; pos - 1)
  {
  servo1.write(pos);
  delay(DELAY_SERVO);
  }
}