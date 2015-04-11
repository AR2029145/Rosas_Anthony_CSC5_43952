/* 
 * File:   main.cpp
 * Author: Zedek
 *
 * Created on April 10, 2015, 7:08 PM
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
    float c , f;// celsius and fahrenheit
        //Prompt user for input
    
    
         //table output
        cout<<"Celsius"<<"        "<<"Fahrenheit"<<endl;
        cout<<"-------------------------"<<endl;
         //calculate
        //°C × 1.8 + 32 = °F
        //(°F − 32) / 1.8 = °C
        //output
    
    for(c=0; c<= 20; c++){
        f=c*1.8+32;
        cout<<c<<"°C"<<" \t"<<"\t"<<f<<"\t°F"<<endl;
    }   
        return 0;
}