/* 
 * File:   main.cpp
 * Author:Rosas Anthony
 * Purpose:Roman Numeral converter
 *
 * Created on January 18, 2015, 9:16 PM
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
    char choice;
   
    //Prompt user for input
    cout<<"Enter a number 1-10:";
    cin>>choice;
    switch (choice)
    {
        case'1':cout<<"I\n";
                break;
        case'2':cout<<"II\n";
                break;
        case'3':cout<<"III\n";
                break;
        case'4':cout<<"IV\n";
                break;
        case'5':cout<<"V\n";
                break;
        case'6':cout<<"VI\n";
                break;
        case'7':cout<<"VII\n";
                break;
        case'8':cout<<"VIII\n";
                break;
        case'9':cout<<"IX\n";
                break;
        case'10':cout<<"X\n";
                break;
    }

   
    
}
