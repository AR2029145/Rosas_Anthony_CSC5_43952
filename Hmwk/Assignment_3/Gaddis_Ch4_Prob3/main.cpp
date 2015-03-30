/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose: Magic Dates
 *
 * Created on January 18, 2015, 9:30 PM
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
    int month, day, year;
   
    
    //Prompt user for input
    cout<<"what date would you like to enter?(in numeric form)"<<endl;
    cout<<"In numeric form what is the month?"<<endl;
    cin>>month;
    
    cout<<"What is the day?"<<endl;
    cin>>day;
    
    cout<<"What is the 2-digit year??"<<endl;
    cin>>year;
   
    //calculate 
    //output
    year==month*day ? cout<<"The date is magic!" : cout<<"The date is not magic!";
   
    
}


