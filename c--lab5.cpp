#include <iostream>
using namespace std;
class LED //create a class name LED
{
private:  // private base
 int PinNumber, TimeDuration;
 float Brightness; //percentage number

public:  //public

 LED(int); //constructor
 void TurnOn(int); //declear
 void TurnOn(int, float);
 void TurnOn(int ,float, int);
 void TurnOff(int);

};

LED::LED(int pin)  //access class LED
{
PinNumber = pin;
 TimeDuration = 100; //  100seconds
 Brightness =10; //  make it bright
}
void LED::TurnOn(int pin) //access class LED
{
 PinNumber = pin;
 TimeDuration = 100; //100seconds
 Brightness = 10;  //make it bright
 cout<<"Turn on the LED connected to pin : "<<PinNumber<<endl;
 cout<<"In the brightness of "<<Brightness<<endl;
 cout<<"The duration of the LED will stay for :"<<TimeDuration<<"seconds"<<endl;
 cout<<"LED will stay forever on by default"<<endl;

}
void LED::TurnOn(int pin, float brightness) //access class LED
{
 PinNumber = pin; //assign pin num
 TimeDuration = 100; //  100seconds
 Brightness = brightness;  //float
cout<<"Turn on the LED connected to pin : "<<PinNumber<<endl;
cout<<"In the brightness of "<<Brightness<<endl;
cout<<"The duration of the LED will stay for :"<<TimeDuration<<"seconds"<<endl;
cout<<"LED will stay forever on by default"<<endl;

}
void LED::TurnOn(int pin, float brightness, int time) //access class LED

{
 pin = PinNumber;
 TimeDuration = time;  //duration
 Brightness = brightness;
 cout<<"Turn on the LED connected to pin : "<<PinNumber<<endl;
 cout<<"In the brightness of "<<Brightness<<endl <<"For the time duration: "<<time<<endl;

}

void LED::TurnOff(int pin) //access class LED
{
  PinNumber= pin;
 // assign brightness and duration
 TimeDuration = 0;  //duration will be 0 with off
 Brightness = 0;  // off will be 0 brightness
 cout<<"Turn off the LED connected to pin : "<<PinNumber<<endl;
 cout<<"The duration of the LED will stay for :"<<TimeDuration<<"seconds"<<endl;

}
int main() {

 LED *GreenLED = new LED(0); // this is pointer
 GreenLED->TurnOn(3);  // assume led is on pin 3
 delete(GreenLED); // delete memory
 return 0;

}
