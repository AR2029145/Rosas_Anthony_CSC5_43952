/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Calories Burned
 * Created on April 10, 2015, 3:20 PM
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
    float cal = 3.6,tolCal = 0; //calories and Total calories
    int mins;// minutes
   
        //Prompt user for input
    
         //table output
    cout<<"minutes"<<"         "<<"Calories"<<endl;
    cout<<"--------------------"<<endl;
         //calculate
    for (mins = 1; mins <= 30; mins +=1){
        tolCal += cal;
        //output loop
        if(mins % 5 == 0){//for every 5mins output the cout statement 
            cout<<mins<<"         \t"<<tolCal<<endl;
        }
            
        
    }
        //output
                
        
        return 0;
}
