/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 20, 2016, 11:12 AM
    Purpose: Double your pennies everyday! A salary table.
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Gaddis 8thEd Chapter 5 Problem 7"<<endl;
    cout<<endl<<"Salary Table Display"<<endl<<endl;
    
    //Declare variables
    unsigned int salary=1;      //Salary starting as a penny
    float totPay=salary;          //Sum of the salaries
    
    //Loop to generate the salary table with total paid
    cout<<" Day           Salary($)      Total($)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    for(int day=2;day<=31;day++){
        //salary*=2;
        salary<<=1; //Bit shift right by one bit
        totPay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
    }
    //Exit stage right
    return 0;
}