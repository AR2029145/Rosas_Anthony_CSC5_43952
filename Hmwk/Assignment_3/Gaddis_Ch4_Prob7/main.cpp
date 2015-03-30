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
unsigned short int sec,min,hour,day; //seconds,minutes,hours,days 
//Prompt user for input
cout<<"How many seconds would you like calculated into larger units of time?"<<endl;
cin>>sec;
//calculate

//output
if (sec >= 60)
{
cout<<"That is "<<min<<"minutes."<<endl;
}
else if (sec >=3600)
{
cout<<"That is "<<hour<<"minutes."<<endl;
}
else if(sec >=86400)
{
cout<<"That is "<<day<<"minutes."<<endl;
}
}
