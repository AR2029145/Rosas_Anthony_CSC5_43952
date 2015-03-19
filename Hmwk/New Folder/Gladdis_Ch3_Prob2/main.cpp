/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Stadium seating 
 *
 * Created on January 18, 2015, 5:56 PM
 */

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
    int seatA, seatB, seatC;            //Seat Types
    int seatAT=seatA*15, seatBT=seatB*12, seatCT=seatC*9; //Seat Types *cost
    int seatTo=seatAT+seatBT+seatCT;     //total of seats sold
    
    
   
    //Prompt user for input
    cout<<"How Many Class A Seats would you like to Buy?"<<endl;//#of class A bought
    cin>>seatA;
    
    cout<<"How Many Class B Seats would you like to Buy?"<<endl;//#of class B bought
    cin>>seatB;
    
    cout<<"How Many Class C Seats would you like to Buy?"<<endl;//#of class C bought
    cin>>seatC;
    //calculate 
    seatAT=seatA*15; //total cost of seats A bought
    seatBT=seatB*12; //total cost of seats B bought
    seatCT=seatC*9; //total cost of seats C bought
    seatTo=seatAT+seatBT+seatCT+0.0; //totals of seats sold
    //output
    cout<<"The total cost of this ticket sales transaction is ";
    cout<<setprecision(5)<<showpoint<<seatTo<<".00"<<endl;
    
    
    
    
}

