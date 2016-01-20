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

using namespace std;

//User Libraries

//Global Constants
float PI=3.1415;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables for e to the x and N factorial
    float nTerm;                      //Determine how many terms
    float tol=1e-3f,x;//variables to help find pi
    float pie;                   //arctan(1)*4 = pi
    
    //Calculate pi
    for(nTerm=1,pie=4;x>tol;nTerm++)
    {
        pie=pie+4*(pow(-1,nTerm)/(2*nTerm+1));
        x=abs(pie-PI);
    }
    //Output the results
    cout<<"The known constant value of pi is "<<PI<<"."<<endl;
    cout<<"The number of terms for the approximated pi value, "<<pie<<", is "<<nTerm<<endl;
    cout<<"The tolerance is "<<tol<<", and the difference is "<<x<<"."<<endl;
    
    //Exit stage right
    return 0;
}