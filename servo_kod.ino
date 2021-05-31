#include<Servo.h>
Servo oservo;
Servo cservo;
int veri = 0;
void setup() 
{
  oservo.attach(6);
  cservo.attach(3);
  Serial.begin(9600);
}

void loop() 
{
    oservo.write(90);
    cservo.write(90);
    if (Serial.available() > 0)
    {
      veri = Serial.read();
    }
    if(veri == 'B')
    {
      oservo.write(50);
      delay(300);
    }
    if(veri == 'N')
    {
      cservo.write(130);
      delay(200);
    }
    if(veri == 'M')
    {
      oservo.write(90);
      cservo.write(90);
    }
}
