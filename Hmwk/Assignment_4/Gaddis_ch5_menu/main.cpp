/* 
 * File:   main.cpp
 * Author:Rosas, Anthony
 * purpose: Menu
 * Created on April 10, 2015, 9:25 PM
 */

//System Libraries
#include<string>//string lib
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions
#include <cmath>// math function library
#include <iomanip>//format lib
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Repeat lines
    char choice;
    
    do {
    //output
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type 6 to solve problem 6"<<endl;
    cout<<"Type 7 to solve problem 7"<<endl;
    cout<<"Type 8 to solve problem 8"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //input choice
    cin>>choice;
    switch(choice){
            case '1':{
                problem1();
                break;
            }
            case '2':{
                problem2();
                break;
            }
            case '3':{
                problem3();
                break;
            }
            case '4':{
                problem4();
                break;
        }
            case '5':{
                problem5();
                break;
            }
            case '6':{
                problem6();
                break;
            }
            case '7':{
                problem7();
                break;
            }
            case '8':{
                problem8();
                break;
        }
      
            default:{
                    cout << "Exit?" << endl;
            }
    } } while ( choice >= '1' && choice <= '8');
    
    return 0;
    }

void problem1(){
       
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
                
        
};
void problem2(){
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
    
        
        
};
void problem3(){
            //Declare Variables
            float oceanL = 1.5;   //Ocean levels
            int years;      //Years
                //Prompt user for input

                 //table output
                 cout<<"Year | Ocean Level in Millimeters"<<endl;
                cout<<"---------------------------------"<<endl;
                 //calculate

            for (int years = 0; years <= 25; years++){//1-25 years
                //output
                cout<<years<<"  \t|       \t"<<oceanL<<"\tmm"<<endl;
                oceanL +=1.5;// rise 1.5 per year

            }
    
        
       
};
void problem4(){
            //Declare Variables
            float cal = 3.6,tolCal = 0; //calories and Total calories
            int mins;// minutes

                //Prompt user for input

                 //table output
            cout<<"minutes"<<"         "<<"Calories"<<endl;
            cout<<"--------------------"<<endl;
                 //calculate
            for (mins = 1; mins <= 30; mins +=1){
                tolCal += cal;
                //output loop
                if(mins % 5 == 0){//for every 5mins output the cout statement 
                    cout<<mins<<"         \t"<<tolCal<<endl;
                }


            }
                //output


};
void problem5(){
            //Declare Variables
            int year; //Year,Membership fee , Membership fee + %increase                                                                                                                                                 
            float feInc = 1.04, mFee=2500;//fee increase, Percentage Total

        //Prompt user for input

        //table output
                    cout<<"Year"<<"        "<<"Membership fee increase"<<endl;
                    cout<<"==================================="<<endl;
        //set precision
                    std::cout.precision(2);
                    std::cout<<std::fixed;
                    //output loop and calculate
            for (year = 1; year <= 6; year +=1){
                mFee=mFee*feInc;

                       cout<<year<<"             \t"<<"\t$"<<mFee<<endl;
            }    
                  
        
};
void problem6(){
    //Declare Variables
    int hours,speed,disT; //Hour,speed, distance traveled
        //Prompt user for input
    do{ 
            cout<<"What is the speed of the vehicle in mph?"<<endl;
            cin>>speed;
            cout<<"How many hours has it traveled?"<<endl;
            cin>>hours;
            
    }while(!(speed >=1 && hours >=1));
        
    
        //output
            cout<<"Hours"<<"   "<<"Distance Traveled"<<endl;
            cout<<"-------------------------"<<endl;  
            
    for (int hour = 1; hour <= hours; hour++){
         disT = hour*speed;
        
            cout<<hour<<"            \t"<<disT<<" Miles"<<endl;
            
    }
            
        
};
void problem7(){
    //Declare Variables
    unsigned long long tDays,pay = 0,pForDay = 1;//days pay and pennies
        //Prompt user for input
    cout<<"How many days did you work this pay period?"<<endl;
    cin>>tDays;
    
         //table output
    cout<<"Days           Pay"<<endl;
    cout<<"---------------------"<<endl;
         //calculate
    for (int day = 1; day <= tDays; day++){
        pay += pForDay;
        cout<<day<<"       \t$"<<(float)pForDay/100<<endl;
        pForDay *= 2; //same thing as writing pForDay = pForDay  * 2
        
    }
        //output
    
        cout<<tDays<<"\tTotal:\t$"<<(float)pay/100<<endl;
        
};
void problem8(){
   //Declare Variables
    float c , f;// celsius and fahrenheit
        //Prompt user for input
    
    
         //table output
        cout<<"Celsius"<<"        "<<"Fahrenheit"<<endl;
        cout<<"-------------------------"<<endl;
         //calculate
        //°C × 1.8 + 32 = °F
        //(°F − 32) / 1.8 = °C
        //output
    
    for(c=0; c<= 20; c++){
        f=c*1.8+32;
        cout<<c<<"°C"<<" \t"<<"\t"<<f<<"\t°F"<<endl;
    }   
        
};
