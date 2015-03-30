/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose:Body Mass Index
 *
 * Created on January 18, 2015, 10:38 PM
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
    float wit, hit; //weight, hight
    float bmi;      //body mass index
    
    //Prompt user for input
    cout<<"What is your weight in pounds?"<<endl;
    cin>>wit;
    cout<<"What is your hight in inches?"<<endl;
    cin>>hit;
    
    //calculate BMI
    bmi=wit*703/(hit*hit);
    cout<<"You have the body mass index of "<<bmi<<endl;
    
    //output
    if (bmi > 25) 
    { 
     cout<<"You're overweight."<<endl;  
    }
    else if(bmi < 18.5)
    {
     cout<<"You're underweight."<<endl;
    }
    else
    {
     cout<<"You're at optimal weight."<<endl; 
    }
}

