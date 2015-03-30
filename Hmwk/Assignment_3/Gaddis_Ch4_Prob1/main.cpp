/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose: min/max
 *
 * Created on January 18, 2015, 8:43 PM
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
    int num1,num2;
   
   
    
    //Prompt user for input
    cout<<"What is the first number?"<<endl;//1st number
    cin>>num1;
    
    cout<<"What is the second number?"<<endl;// 2nd number
    cin>>num2;
   
    //calculate 
    //output
    num1 > num2 ? cout<<num1<<" is bigger." : cout<<num2<<" is bigger.";
   
    
}

