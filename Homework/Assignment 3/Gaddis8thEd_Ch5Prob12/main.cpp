/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 20, 2016, 10:35 AM
    Purpose: Table of temperature conversions (interpolation)
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Gaddis 8thEd Chapter 5 Problem 12"<<endl;
    cout<<endl<<"Table of Temperatures Display"<<endl<<endl;
    
    //Declare variables
    float slope=5.0f/9; //Slope of the line for temp conv
    char  intrcpt=-32;   //Intercept of the line is scaled by 9/5ths degrees C
    unsigned char  c1=0,c2=100,f1=32,f2=212; //Freezing and boiling temps for F and C
    
    //Loop to generate the degree Celsius and output the table
    cout<<"Fahrenheit    Celsius    Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f=f+1){
        float ceq=slope*(f+intrcpt); //Celsius equation
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1); //Celsius intercept
        cout<<setw(9)<<f<<setw(10)<<ceq<<setw(11)<<cintrp<<endl;
    }
    //Exit stage right
    return 0;
}