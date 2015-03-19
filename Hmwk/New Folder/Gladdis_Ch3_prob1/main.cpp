/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose:Miles per Gallon
 *
 * Created on January 16, 2015, 7:18 PM
 */

//system Libraries
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions
#include <cmath>// math function library
#include<iomanip>//format lib
using namespace std;
//user Libraries
//global constants
//function prototypes
//execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float gal;   //gallons
    float mil;   //miles
    float mpg;   //Miles per gallon
    //Prompt user for input
    cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>gal;
    cout<<"How many miles can it be driven on a full tank?"<<endl;
    cin>>mil;
    
    //calculate MPG
    mpg=mil/gal;
    cout<<"The amount of miles your car may be driven on a full tank of gas is "<<endl;
    cout<<mpg<<endl;
    
}

