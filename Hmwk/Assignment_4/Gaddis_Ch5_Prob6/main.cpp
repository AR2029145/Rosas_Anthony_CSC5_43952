/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 *Purpose:Distance Traveled
 * Created on April 10, 2015, 5:50 PM
 */

//system Libraries
#include<string>//string lib
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
    int hours,speed,disT; //Hour,speed, distance traveled
        //Prompt user for input

            
    do{ 
            cout<<"What is the speed of the vehicle in mph?"<<endl;
            cin>>speed;
            cout<<"How many hours has it traveled?"<<endl;
            cin>>hours;
            
    }while(!(speed >=1 && hours >=1));
        
    
        //output
            cout<<"Hours"<<"   "<<"Distance Traveled"<<endl;
            cout<<"-------------------------"<<endl;  
            
    for (int hour = 1; hour <= hours; hour++){
         disT = hour*speed;
        
            cout<<hour<<"            \t"<<disT<<" Miles"<<endl;
            
    }
            
        return 0;
}

