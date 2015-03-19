/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Percentage of males and females
 *
 * Created on January 18, 2015, 7:08 PM
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
    float mal, feMal; //male and female
    float tol;     //total
    float mPer, fPer;  // total percent
   
    
    //Prompt user for input
    cout<<"How many males are in your class ?"<<endl;//number of males
    cin>>mal;
    
    cout<<"How many females are in your class?"<<endl;// number of females
    cin>>feMal;
   
    //calculate 
    tol=mal+feMal;//Total number of students
    mPer=mal/tol;//Male percentage
    fPer=feMal/tol;//Female percentage
   
    //Output
    cout<<"The total number of students are ";
    cout<< tol <<endl;
    cout<<"Of that ";
    cout<<setprecision(2)<<showpoint<<mPer<<"%"<<" are males, ";
    cout<<"and "<<setprecision(2)<<showpoint<<fPer<<"%"<< " are females."<<endl;

    
    
}

