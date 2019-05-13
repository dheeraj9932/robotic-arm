#include <Servo.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  625 // this is the 'maximum' pulse length count (out of 4096)
uint8_t servonum = 0;
int input;
int val1=250;int val2=465;int val3=150;int val4=200;int val5=500;int val6=385; 
int k;
int counter;

void setup()
{
  Serial.begin(9600);
  Serial.println("16 channel Servo test!");
  pwm.begin();
  pwm.setPWMFreq(60); 
  Serial.println("give dof");
}
void loop() {home();/*pwm.setPWM(0, 0, val1 );*/}
int home() 
{
  if (Serial.available() > 0) 
  {
    input = Serial.parseInt();
    //Serial.print(input);
    arm(input);
    //pwm.setPWM(0, 0, val1 );
    Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
    delay (1000);
  }
}

int arm(int x)
{
  //Serial.println(x);
  switch (x)
  {
   case 1: { 
            Serial.println("dof1 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7)      {val1=val1-20; pwm.setPWM(0, 0, val1 );Serial.println(val1); if(val1<=150){val1=170;}}
               else if (k==8){val1=val1+20; pwm.setPWM(0, 0, val1 );Serial.println(val1); if(val1>=625){val1=605;}}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break; 
           }
   case 2: { 
            Serial.println("dof2 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7){val2=val2-20; pwm.setPWM(1, 0, val2 );pwm.setPWM(2, 0, 775-val2 );Serial.print(val2);Serial.print("   ");Serial.println(775-val2); if(val2<=150){val2=170;}}
               else if (k==8){val2=val2+20; pwm.setPWM(1, 0, val2);pwm.setPWM(2, 0, 775-val2);Serial.print(val2);Serial.print("   ");Serial.println(  775-val2); if(val2>=625){val2=605;}}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break; 
           }    
   case 3: { 
            Serial.println("dof3 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7){val3=val3-20; pwm.setPWM(3, 0, val3 );pwm.setPWM(4, 0, 775-val3 );Serial.print(val3);Serial.print("   ");Serial.println(775-val3); if(val3<=150){val3=170;}}
               else if (k==8){val3=val3+20; pwm.setPWM(3, 0, val3);pwm.setPWM(4, 0, 775-val3);Serial.print(val3);Serial.print("   ");Serial.println(  775-val3); if(val3>=625){val3=605;}}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break; 
           } 
   case 4: { 
            Serial.println("dof4 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7){val4=val4-20; pwm.setPWM(5, 0, val4 );Serial.println(val4); if(val4<=150){val4=170;}}
               else if (k==8){val4=val4+20; pwm.setPWM(5, 0, val4);Serial.println(val4); if(val4>=310){val4=290;}}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break; 
           }        
   case 5: { 
            Serial.println("dof5 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7){val5=val5-40; pwm.setPWM(6, 0, val5 );Serial.println(val5); if(val5<=405){val5=360;}}
               else if (k==8){val5=val5+40; pwm.setPWM(6, 0, val5);Serial.println(val5); if(val5>=625){val5=605;}}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break; 
           }  

   case 6: { 
            Serial.println("dof6 chosen");Serial.println("use -7- & +8+ to manipulate the dof// 9 to choose dof");
            while (true){
            if (Serial.available() > 0) 
              {
               k = Serial.parseInt();
               Serial.setTimeout(1000000000);//after 11 days servo position will go back to 0  #hackerman
               //Serial.print(k);Serial.print(k);//Serial.print(k);
               if(k==7)      {val6=340; pwm.setPWM(8, 0, val6 );Serial.println(val6);}
               else if (k==8){val6=500; pwm.setPWM(8, 0, val6);Serial.println(val6);}
               else if(k==9) {Serial.println("give dof"); home() ;}
               delay (1000);
              }}
            break;
   }
   case 10: { 
            Serial.println("default state chosen");Serial.println("use 9 to choose dof");
            Serial.print(val1);Serial.print("   ");Serial.print(val2);Serial.print("   ");Serial.print(val3);Serial.print("   ");
            Serial.print(val4);Serial.print("   ");Serial.print(val5);Serial.print("   ");Serial.println(val6);
            /*while (val1 != 250) 
            { 
              if(val1>250)
                {for(val1>250; val1==250;val1--){ pwm.setPWM(0, 0, val1);}}
              else 
                {for(val1>250; val1==250;val1++){ pwm.setPWM(0, 0, val1);}}
            } */
            pwm.setPWM(0, 0, 250);                           //dof1
            pwm.setPWM(1, 0, 325 );pwm.setPWM(2, 0,775-325 ); //dof2
            pwm.setPWM(3, 0, 150 );pwm.setPWM(4, 0,625 );     //dof3 
            pwm.setPWM(5, 0, 200 );                           //dof4
            pwm.setPWM(6, 0, 500 );                           //dof5
            pwm.setPWM(8, 0, 150 );                           //dof6
            Serial.println("give dof"); home() ;
               delay (1000);
              
            break;          
  }

                
  }
}

