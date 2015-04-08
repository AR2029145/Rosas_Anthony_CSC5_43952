/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * purpose:Sum of numbers
 * Created on April 8, 2015, 8:03 AM
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
        int useNub;//user input numbers
        unsigned long long int sum=0;//Total of all integers
        //Prompt user for input
        do{
        cout<<"Enter a postive whole number."<<endl;
        cout<<"I'll add the sum of all its integers."<<endl;
        cin>>useNub;//user enters number
        }while(!(useNub>=1 && useNub<= 2147483647));//removed 5 off to make it work
        //calculate 
        for (unsigned long int minNub=1; minNub <= useNub; minNub++){     //for loop increment
            sum += minNub;
        }
        //output
        cout<<"The sum of numbers 1 to "<<useNub<<" is "<<sum<<endl;
        return 0;
}