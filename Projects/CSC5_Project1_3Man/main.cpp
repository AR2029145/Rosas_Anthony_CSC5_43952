/* 
 * File:   main.cpp
 * Author: Rosas, Anthony
 *Purpose: A game to illustrate all the concepts covered up to the Midterm
 * Created on April 17, 2015, 3:53 PM
 */

//system Libraries
#include <string>//string lib
#include <cstdlib>//Random rand()
#include <iostream>//Keyboard/Monitor
#include <fstream>//File I/O
#include <ctime>//time fuctions
#include <cmath>// math function library
#include <iomanip>//format lib
#include <cstring>//char place holder
using namespace std;
//user Libraries
//global constants
//function prototypes
void init();//(promt user for #of players and names)

//'const' is constant variable, can not be modified or reassigned
const unsigned int MAXPLAY = 8;//Max amount of players 

//Declare Variables
unsigned int playCot;//user input for player #
char pName[21];//Players name up to 21 char(array)

//array of player structures
player players[MAXPLAY];

//execution begins here
//Declare structures
struct player{// Players Name and points stored as a structure 
	string name;//Players name
	unsigned int points = 30;// Players points 
	bool active = false; //player may be eliminated or game may have started with less players than the max allowed
};



int main(int argc, char** argv)
{
		
	//Prompt user for input  
	
	
        
               init();    
                
         return 0;	
}

void init(){
    do
        {
            cout<<"Please enter a valid amount of players."<<endl;
            cin >> playCot;//for every player in player_count, assign them a name and make them active example: players[index].name = "Anthony"; players[index].active = true; playCot -1 b/c array is 0-7(index and we don't want/have a "8th" index )

         }while(playCot <= 0 || playCot >= 9 );
             
	for(int playTemp = 0; playTemp <= playCot -1 ; playTemp++){//playTemp(incerment counter place holder) is used in the array (ZERO-7 (players 1-8)) as a counter to place each name in its given spot
            do
            {
                cout<<"Please enter a valid player name."<<endl;
                cin>>pName;
             }while(strlen(pName) <= 0);//strlen is a function call from<cstringlib>
           players[playTemp].name = pName;//(array)[counter++1].(part of structure) = (name user inputs)
           players[playTemp].active = true;//(array)[counter++1].(part of structure) = (verification of active player)
           
        }
}