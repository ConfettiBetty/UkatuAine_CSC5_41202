/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 21, 2016, 11:07 AM
    Purpose: Savings and inflation table
 */

//System Libraries
#include <iostream> // I/O
#include <iomanip>  // Format

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Fun Look at Savings, Rule of 72: how long to double?"<<endl;
    cout<<endl<<"http://california.municipalbonds.com/bonds/recent"<<endl;
    
    //Declare and initialize variables
    float balance=100.0f;        //Initial balance in US dollars
    float intRate=0.05f;         //Interest rate per year
    float rule72=0.72f/intRate;  //Rule of 72:When future value is 2X the present value
    float intErnd;               //Interest Earned
    
    //Output the table heading
    cout<<"The interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this interest, principal balance should double every "<<endl;
    cout<<rule72<<" Years "<<endl;
    cout<<"Year    Year  Balance    Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    intErnd=balance*intRate;
    cout<<"0       2016"<<setw(8)<<balance<<setw(9)<<balance*intRate<<endl;
    
       
    //Calculate the savings
    balance*=(1+intRate);
    for(int y=1, year=2017;y<=50;y++,year++){
        intErnd=balance*intRate;
        cout<<y<<setw(4)<<year<<setw(8)<<balance<<setw(9)<<balance*intErnd<<endl;
        balance*=(1+intRate);
    }
    
    //Exit stage right
    return 0;
}