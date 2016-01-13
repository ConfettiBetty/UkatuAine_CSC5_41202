/* 
    File:   Calculate Interest Payment
    Author: Aine Ukatu
    Created on January 13, 2016, 8:46 AM
    Purpose:  Gaddis 8thEd Ch3 Problem 19
  */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables problem 1
    float moPymt;  //Monthly payment amount
    float intRate=0.14; // Interest Rate per year
    unsigned char numPay=48; //How many months of payment
    int loan=10000; //Amount of the loan
    float intTtl;
    float moInt;
    
    //Calculate the monthly payment
    
    moPymt=(((intRate/12)*pow((1+(intRate/12)),numPay)/(pow((1+(intRate/12)),numPay)-1))*loan);
            
    //Calculate the total interest paid over the life of the loan
    
    intTtl=loan*intRate*4;
    
    //Calculate the monthly interest payment
    
    moInt=moPymt*48-loan;
   
   cout<<fixed<<setprecision(2)<<showpoint;
   
    //Determine the results
            
    cout<<"Your monthly payment is $"<<moPymt<<endl;

    cout<<"Your total interest paid over the life of the loan is $"<<moInt<<endl;
    
    //Exit stage right
    return 0;
}
