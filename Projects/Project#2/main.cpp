/* 
 * File:   main.cpp
 * Author: Rosas Annhtony
 *Purpose:PvP Tic-Tac Toe
 * Created on April 18, 2015, 8:16 PM
 */

//system Libraries
#include <cstdlib>//Random rand() ,sand
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time functions
#include <cmath>// math function library
#include <iomanip>//format lib
using namespace std;
//user Libraries
//global constants
//function prototypes
//execution begins here
int main(int argc, char** argv) {
    //Declare Variables
        unsigned short int bestOf;//user inputs the total amount of games they with to play in a set
    string choice;// yes, no, best of , single
   
    //Prompt user for input
    //asking the user if they wish to play
    do
    {
        cout<<"Would you like to play a game of Tic Tac Toe?"<<endl;
        cout<<"Please enter \"yes\" or \"no\"."<<endl; 
        cin>>choice; 
    }while(!(choice == "yes" || choice == "no"));  
    
    if(choice == "yes"){
        //loop asking if the player wishes to play once game or a best of set
        do
        {
            cout<<"Would you like to play a single game? Or a best of games set."<<endl;
            cout<<"Enter \"single\" for a single game or \"best of\" for a best of game set."<<endl;
            cin.get();
            getline(cin, choice);
            
        }while(!(choice == "best of" || choice == "single"));
        
        if(choice == "best of"){
            //if the player choose a "best of" set then we must know that amount they want to play
            do
            {
                cout<<"How many games would you like to play?"<<endl;
                cout<<"The maximum amount of games allowed are ten and no less then three, so don't try nothing funny."<<endl;
                cin>>bestOf;         
            }while(!(bestOf <= 10 && bestOf >= 3));
        }
    }else{
        cout<<"Goodbye"<<endl;
    }
    
    
    
    return 0;
}

