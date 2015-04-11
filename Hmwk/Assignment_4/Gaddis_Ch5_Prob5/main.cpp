/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 *Purpose: % of Membership fee increase
 * Created on April 10, 2015, 3:58 PM
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
const char CONVPCT = 100;//percentage conversion 

//function prototypes
//execution begins here
int main(int argc, char** argv) {
//Declare Variables
    int year; //Year,Membership fee , Membership fee + %increase                                                                                                                                                 
    float feInc = 1.04, mFee=2500;//fee increase, Percentage Total
    
//Prompt user for input
    
//table output
            cout<<"Year"<<"        "<<"Membership fee increase"<<endl;
            cout<<"==================================="<<endl;
//set precision
            std::cout.precision(2);
            std::cout<<std::fixed;
            //output loop and calculate
    for (year = 1; year <= 6; year +=1){
        mFee=mFee*feInc;
        
               cout<<year<<"             \t"<<"\t$"<<mFee<<endl;
    }    
                  
        return 0;
}

