/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 *
 * Created on March 9, 2015, 10:22 AM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
        //Declare variables
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take to maintain your weight?"<<endl;
    cout<<"Input you weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input your hight in inches"<<endl;
    cin>>htin;
    cout<<"Input your age as yrs"<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f one char input"endl;
    cin>>mf;
    //Calculate
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //  ques    if male  if female
    nCBars=((mf=='m')?)(BMRMale/cBar:):(BMRFem/cBar);
    //Output the results
    cout<<"Your weight = "<<wtlbs<<"(lbs)"endl;
    cout<<"Your Height = "<<htin<<"(inches)"endl;
    cout<<"Your Age = "<<ageyrs<<"(Years)"endl;
    cout<<"Your sex = "<<((mf=='m')?"Male":"Female")<<endl;
    

    return 0;
}

