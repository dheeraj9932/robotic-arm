#include <Servo.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  625 // this is the 'maximum' pulse length count (out of 4096)
uint8_t servonum = 0;
int input;
int val1=430; int val2=450;  int val3=625;  int val4=250;  int val5=605;  int val6=500; 
int k;

void setup()
{
  Serial.begin(9600);
  Serial.println("16 channel Servo test!");
  pwm.begin();
  pwm.setPWMFreq(60); 
  Serial.println("begin pick & place");
            
}

void loop()
         {
            Serial.println("begin 'pick & place' ");Serial.println("use -2- to stop");
 //to position A---to position A---to position A---to position A---to position A---to position A---to position A---to position A---to position A---to position A---to position A
            
            /*for (val5=360; val5<=605; val5++) 
            { 
             pwm.setPWM(6, 0, val5 );
             delay(10);
            }*/
            for (val1=430; val1>=230;val1--) 
            { 
             pwm.setPWM(0, 0, val1 );
             delay(10);
            } 
            for (val4=260; val4>=160; val4--) 
            { 
             pwm.setPWM(5, 0, val4 );
             delay(10);
            }
            for (val2=450; val2>=290;val2--) 
            { 
             pwm.setPWM(1, 0, val2 );pwm.setPWM(2, 0, 775-val2 );
             delay(10);
            } 
            for (val3=625; val3>=600;val3--) 
            { 
             pwm.setPWM(3, 0, val3 );pwm.setPWM(4, 0, 775-val3 );
             delay(10);
            }
            
            
            for (val6=500; val6>=340; val6--) 
            { 
             pwm.setPWM(8, 0, val6 );
             delay(10);
            } 
            
 //---to position B---to position B---to position B---to position B---to position B---to position B---to position B---to position B---to position B---to position B---to position B---to position B  
             
            
            for (val2=290; val2<=450;val2++) 
            { 
             pwm.setPWM(1, 0, val2 );pwm.setPWM(2, 0, 775-val2 );
             delay(10);
            }
            for (val4=160; val4<=260; val4++) 
            { 
             pwm.setPWM(5, 0, val4 );
             delay(10);
            }
             for (val1=230; val1<=430;val1++) 
            { 
             pwm.setPWM(0, 0, val1 );
             delay(10);
            } 
            for (val3=600; val3<=625;val3++) 
            { 
             pwm.setPWM(3, 0, val3 );pwm.setPWM(4, 0, 775-val3 );
             delay(10);
            }
            
 //---to position C---to position C---to position C---to position C---to position C---to position C---to position C---to position C---to position C---to position C---to position C---to position C

             
             for (val2=450; val2>=325;val2--) 
            { 
             pwm.setPWM(1, 0, val2 );pwm.setPWM(2, 0, 775-val2 );
             delay(10);
            }
            for (val4=260; val4>=160; val4--) 
            { 
             pwm.setPWM(5, 0, val4 );
             delay(10);
            }
            for (val3=625; val3>=600;val3--) 
            { 
             pwm.setPWM(3, 0, val3 );pwm.setPWM(4, 0, 775-val3 );
             delay(10);
            }
            
            for (val6=340; val6<=500; val6++) 
            { 
             pwm.setPWM(8, 0, val6 );
             delay(10);
            }
 //---to position D---to position D---to position D---to position D---to position D---to position D---to position D---to position D---to position D---to position D---to position D---to position D
             
            
            for (val2=325; val2<=450;val2++) 
            { 
             pwm.setPWM(1, 0, val2 );pwm.setPWM(2, 0, 775-val2 );
             delay(10);
            }
            
            for (val3=600; val3<=625;val3++) 
            { 
             pwm.setPWM(3, 0, val3 );pwm.setPWM(4, 0, 775-val3 );
             delay(10);
            }
            
           /* 
            for (val5=605; val5>=360; val5--) 
            { 
             pwm.setPWM(6, 0, val5 );
             delay(10);
            }*/
         }              
