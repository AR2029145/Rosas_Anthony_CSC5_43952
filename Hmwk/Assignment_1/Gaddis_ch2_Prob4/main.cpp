/* 
 * File:   main.cpp
 * Author: Anthony Rosas
 * Purpose: Restaurant Bill
 *
 * Created on January 11, 2015, 6:58 PM
 */

//System Libraries
#include <Iostream>
using namespace std;

//user Libraries

//Global constants
const float CONVPCT=100;//Percent conversion
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
     float Mel = 88.67; //meal cost
     float Tax = 6.75;// tax %
     float Tip = 20; //Tip %
    //Calculate tax, tip, total
     float MelTax = Mel*Tax/CONVPCT; //Meal tax
     float MelTip = Mel*Tip/CONVPCT; // Meal Tip
     float Total = Mel+MelTax+MelTip; //Tip, Tax, and Meal added together
    
    //prompt user for input
    
            
    //Output the results
     cout<<"Meal cost = ";
     cout<<Mel<<endl;
     cout<<"Meal tax = ";
     cout.precision(3);
     cout<<MelTax<<endl;
     cout<<"Meal tip = ";
     cout.precision(4);
     cout<<MelTip<<endl;
     cout<<"Meal Total = ";
     cout.precision(5);
     cout<<Total<<endl;
    //Exit stage right
    
    return 0;
}


