/* 
 * File:   main.cpp
 * Author: Zedek
 *Purpose: Time Calculator 
 * Created on March 30, 2015, 4:22 PM
 */

#include <cstdlib>
//system Libraries
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions
#include <cmath>// math function library
#include <iomanip>//format lib
using namespace std;
//user Libraries
//global constants
//function prototypes
//execution begins here
int main(int argc, char** argv) {
//Declare Variables
unsigned int sec,min,hour,day,rmain; //seconds,minutes,hours,days,remainder 

//Prompt user for input
cout<<"How many seconds would you like calculated into larger units of time?"<<endl;
cin>>sec;
//calculate

//output
if (sec >=86400)//greater then amount of seconds in days
{   
    day = (int)sec/86400;//calculate 
    rmain = sec % 86400;//remainder in seconds
    cout<<"That is "<<day<<" days and "<<rmain<<" seconds."<<endl;//output results
}
else if (sec>=3600)//is greater then amount of seconds in hours
{
     hour = (int)sec/3600;//calculate
     rmain = sec % 3600;//remainder in seconds
cout<<"That is "<<hour<<" hours and "<<rmain<<" seconds."<<endl;//output results
}
else if (sec >=60)
{
    min = (int)sec/60;//calculate
    rmain = sec % 60; //remainder in seconds       
cout<<"That is "<<min<<" minutes and "<<rmain<<" seconds."<<endl;//output results
}
else if (sec < 60)//calculate
{
cout<<"That is "<<sec<<" seconds."<<endl;//output results
}
}
