/* 
 * File:   main.cpp
 * Author:Anthony Rosas
 * Purpose:Average of values
 *
 * Created on January 11, 2015, 8:31 PM
 */

//System Libraries
#include <Iostream>
using namespace std;

//user Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short int Apples =28;
    unsigned short int Oranges =24;
    unsigned short int Bananas =32;
    unsigned short int Coconuts =37;
    unsigned short int Peaches =33;
    //Calculate Sum of numbers
    unsigned short int Sum = Apples+Oranges+Bananas+Coconuts+Peaches;
    //Calculate Average
    unsigned short int Average =Sum/5;
    //prompt user for input
    
            
    //Output the results
    cout<<"The Average number of fruits are ";
    cout<< Average ;
    //Exit stage right
    
    return 0;
}


