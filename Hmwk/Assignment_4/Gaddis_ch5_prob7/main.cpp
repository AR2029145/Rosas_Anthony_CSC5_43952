/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose: Pennies for pay
 *
 * Created on April 9, 2015, 8:00 PM
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
    unsigned long long tDays,pay = 0,pForDay = 1;//days pay and pennies
        //Prompt user for input
    cout<<"How many days did you work this pay period?"<<endl;
    cin>>tDays;
    
         //table output
    cout<<"Days           Pay"<<endl;
    cout<<"---------------------"<<endl;
         //calculate
    for (int day = 1; day <= tDays; day++){
        pay += pForDay;
        cout<<day<<"       \t$"<<(float)pForDay/100<<endl;
        pForDay *= 2; //same thing as writing pForDay = pForDay  * 2
        
    }
        //output
    
        cout<<tDays<<"\tTotal:\t$"<<(float)pay/100<<endl;
        return 0;
}