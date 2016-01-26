/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 4, 2016, 11:32 AM
    Purpose: Calculation of pi
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
float PI=3.1415;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables for finding pi
    float piCalc;         //Calculated value of pi arctan(1)*4 = pi
    float piDiff;         //Difference between calculated pi and global constant
    
    //Calculate pi
    piCalc=atan(1)*4;
    piDiff=piCalc-PI;
    
    //Output the results
    cout<<"The known constant value of pi is "<<PI<<"."<<endl;
    cout<<"The calculated value for pi is "<<setprecision(4)<<piCalc<<endl;
    cout<<"The difference is "<<setprecision(4)<<piDiff<<"."<<endl;
    
    //Exit stage right
    return 0;
}