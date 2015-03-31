/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Color Mixer
 *
 * Created on March 30, 2015, 6:14 PM
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
    string choice1,choice2;
    //Prompt user for input
    cout<<"Choose two different primary colors to be mixed."<<endl;
    cout<<"What is your first choice? ";
    cin>>choice1;
    cout<<"What is your second choice? ";
    cin>>choice2; 
    if ((choice1 == "red" && choice2 == "blue")||(choice1 == "blue" && choice2 == "red"))
    {
         cout<<"Purple!";
    }
    else if ((choice1 == "red" && choice2 == "yellow")||(choice1 == "yellow" && choice2 == "red"))
     {
         cout<<"Orange!";
    }
    else if ((choice1 == "blue" && choice2 == "yellow")||(choice1 == "yellow" && choice2 == "blue"))
     {
         cout<<"Green!";
    }
    else 
     {  
        cout<<"Pick a valid set of colors!";
    }
}
