/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 *Purpose:Display ASCII Code
 * Created on April 10, 2015, 1:48 PM
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
    char letr;
        //Prompt user for input
    
         //table output
 
         //calculate
    for (int num = 0; num <= 127; num++){
        
        cout<<letr ;
        if (num % 16 == 0){//if number / 16 has remainder of 0 :endl
            cout<<endl;
        }
        letr ++;
    }
        //output
    
        
        return 0;
}
