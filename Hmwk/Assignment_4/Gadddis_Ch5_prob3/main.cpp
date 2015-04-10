/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose Ocean Levels
 * Created on April 10, 2015, 2:48 PM
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
    float oceanL = 1.5;   //Ocean levels
    int years;      //Years
        //Prompt user for input
    
         //table output
         cout<<"Year | Ocean Level in Millimeters"<<endl;
        cout<<"---------------------------------"<<endl;
         //calculate
    
    for (int years = 0; years <= 25; years++){//1-25 years
        //output
        cout<<years<<"  \t|       \t"<<oceanL<<"\tmm"<<endl;
        oceanL +=1.5;// rise 1.5 per year
        
    }
    
        
        return 0;
}

