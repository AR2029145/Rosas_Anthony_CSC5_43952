/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Mass And Weight
 *
 * Created on January 18, 2015, 10:59 PM
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
    float mas; //mass And weight in newtons
    float win;
    
    //Prompt user for input
    cout<<"What is the mass of the object?"<<endl;
    cin>>mas;
    
    //calculate Weight = mass x 9.8
    win=mas*9.8;
    cout<<"The weight of the object is  "<<win<<endl;
    
    //output
    if (win > 1000) 
    { 
     cout<<"The object is too heavy."<<endl;  
    }
    else if(win < 10)
    {
     cout<<"The object is too light."<<endl;
    }
    else
    {
     cout<<"the object is at optimal weight."<<endl; 
    }
}

