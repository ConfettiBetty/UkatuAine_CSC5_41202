/* 
    File:   Class Competition Jan 13, 2016
    Author: Aine Ukatu
    Created on January 13, 2016, 11:09 AM
    Purpose:  Class Competition January 13, 2016
 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short grsInc; //Gross Income
    float tax;             //Tax in decimal form
    int netInc;            //Net Income
    unsigned short cnvTxPt; //Conversion of Tax to percentage
    
    //Input the Gross Income
    cout<<"Input your gross income."<<endl;
    cin>>grsInc;
    
    cnvTxPt=tax*100;
    netInc=grsInc-(grsInc*tax);

    tax =(grsInc>=40000?'40%':
         (grsInc>=35000?'35%':
         (grsInc>=30000?'30%':
         (grsInc>=25000?'25%':
         (grsInc>=20000?'20%':
         (grsInc>=15000?'15%':
         (grsInc>=10000?'10%':
         (grsInc<=5000?'0%':))))))));
    
    //Output the Net Income
    cout<<"Your net income is $"<<static_cast<int>(netInc)<<endl;
    cout<<"Your tax bracket is "<<cnvTxPt<<"%"<<endl;
  
    //Exit stage right
    return 0;
}
