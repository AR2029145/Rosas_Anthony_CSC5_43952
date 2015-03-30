/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose: Areas of two Rectangles
 *
 * Created on January 18, 2015, 10:05 PM
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
    float len1, wid1, len2, wid2;//Length and width
    float rect1, rect2;          //area of an rectangle
   
    
    //Prompt user for input
    cout<<"What is the length of first rectangle?"<<endl;
    cin>>len1;
    cout<<"What is the width of the first rectangle?"<<endl;
    cin>>wid1;
    cout<<"What is the length of second rectangle?"<<endl;
    cin>>len2;
    cout<<"What is the width of the second rectangle?"<<endl;
    cin>>wid2;
    //calculate area of rectangle
    rect1=len1*wid1;
    rect2=len2*wid2;
    //output
    if (rect1 > rect2) 
    { 
     cout<<"Rectangle one has the greater area."<<endl;  
    }
    else if(rect1 < rect2)
    {
     cout<<"Rectangle two has the greater area."<<endl;
    }
    else
    {
     cout<<"The rectangles have the same area."<<endl; 
    }
}