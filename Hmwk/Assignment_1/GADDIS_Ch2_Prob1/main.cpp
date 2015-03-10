/* 
 * File:   main.cpp
 * Author: Rosas Anthony
 * Purpose: HW, The sum of two numbers
 *
 * Created on January 6, 2015, 3:59 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) 
{
    unsigned int apples;
    unsigned int bananas;
    unsigned int total;
    
    apples = 50;
    bananas = 100;
    total = apples + bananas;
    
    cout << "We have " << apples << " apples." << endl;
    cout << "And " << bananas << " bananas." << endl;
    cout << "The sum of apples and bananas equals " << total << endl;
    
    // Exit stage right.
    
    return 0;
}

