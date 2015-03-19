/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 * Purpose:Test average
 *
 * Created on January 16, 2015, 8:56 PM
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
    float tet1,tet2,tet3,tet4,tet5;//Tests 1-5
    float tetTol;//total of all five tests
    int aver=5;//Number of tests
    float averTol;// average of all five tests
    
    //set point
    std::cout.precision(1);
   
    //Prompt user for input
    cout<<"What was the score of Test1?"<<endl;//Score of test one
    cin>>tet1;
    
    cout<<"What was the score of Test2?"<<endl;//Score of test two
    cin>>tet2;
    
    cout<<"What was the score of Test3?"<<endl;//Score of test three
    cin>>tet3;
    
    cout<<"What was the score of Test4?"<<endl;//Score of test four
    cin>>tet4;
    
    cout<<"What was the score of Test5?"<<endl;//Score of test five
    cin>>tet5;
     
    //calculate 
    
    tetTol=tet1+tet2+tet3+tet4+tet5;//total of scores
    averTol=tetTol/aver;            // scores average 
    //Output
    //set point
    std::cout.precision(1);
    cout<<"The average of all five test scores = ";
    std::cout << "\n" << std::fixed;
    std::cout<<averTol<<'\n'<<endl;
    
    
}


