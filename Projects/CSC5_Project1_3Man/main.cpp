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
 

//execution begins here

//Declare structures

struct player{// Players Name and points stored as a structure 
	string name;//Players name
	unsigned int points = 30;// Players points 
	bool active = false; //player may be eliminated or game may have started with less players than the max allowed
};



int main(int argc, char** argv)
{
	//'const' is constant variable, can not be modified or reassigned
	const unsigned int MAXPLAY = 8;//Max amount of players 
	
        //Declare Variables
	unsigned int playCot;//user input for player #
        char pName[21];//Players name up to 21 char(array)
        
        //array of player structures
	player players[MAXPLAY];
	

	//example array visualized, 4 player game, missing players are NULL:
	//
	//[				
	//	{ 
	//		name: "Andy",          
	//		points : 30,	
	//		active = true 
	//	},			
	//	{ 
	//		name: "Anthony",       
	//		points : 30,	
	//		active = true 
	//	},				
	//	{ 
	//		name: "Tony", 
	//		points : 30,	
	//		active = true 
	//	},			{ 
	//		name: "Jaime",         
	//		points : 30,	
	//		active = true 
	//	},				
	//	{ 
	//		name: NULL,			 
	//		points : 30,	
	//		active = false 
	//	},			
	//	{ 
	//		name: NULL,			 
	//		points : 30,	
	//		active = false 
	//	},			
	//	{ 
	//		name: NULL,			 
	//		points : 30,	
	//		active = false 
	//	},			
	//	{ 
	//		name: NULL,			 
	//		points : 30,	
	//		active = false 
	//	},
	//]


	//Prompt user for input  
	
	
        do
        {
            cout<<"Please enter a valid amount of players."<<endl;
            cin >> playCot;//for every player in player_count, assign them a name and make them active example: players[index].name = "Anthony"; players[index].active = true;
    //playCot -1 b/c array is 0-7(index and we don't want/have a "8th" index )

         }while(playCot <= 0 || playCot >= 9 );
             
	for(int playTemp = 0; playTemp <= playCot -1 ; playTemp++){//playTemp is a temp hold for the computer to count off of
            
            
            do
            {
                cout<<"Please enter a valid player name."<<endl;
                cin>>pName;
             }while(strlen(pName) <= 0);//strlen is a function call from<cstringlib>
        }
                   
          
        
        
        
        /*2.	2 to 8
*Total of 7 - Player to right of roller loses a point 
*Total of 11 - Player to left of roller loses a point
*Total of 9 – Everybody loses a Point
*Any 3 or sum to 3 - Three man loses a point 
*1 and 4 – Lose a turn 
*1 and 5 – Lose a turn 
*Doubles – Choose a player to lose points
*/
         
        
        
	return 0;	
}