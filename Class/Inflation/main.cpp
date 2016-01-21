/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 21, 2016, 11:45 AM
    Purpose: Inflation table
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
    float price=0.25f;        //Initial price in US dollars
    float inflate=0.02f;         //Inflation rate per year
    float rule72=0.72f/inflate;  //Rule of 72:When future value is 2X the present value
    float infYear;               //Inflation per year
    
    //Output the table heading
    cout<<"The inflation rate = "<<inflate*100<<"%"<<endl;
    cout<<"At this inflation rate, price should double every "<<endl;
    cout<<rule72<<" Years "<<endl;
    cout<<"Year    Year  Price      Inflation"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    infYear=price*inflate;
    cout<<"0       2016"<<setw(8)<<price<<setw(9)<<price*inflate<<endl;
    
       
    //Calculate the savings
    int y=1, year=2017;
    do{
        infYear=price*inflate;
        price*=(1+inflate);
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<price<<setw(9)<infYear<<endl;
      }
    
    //Exit stage right
    return 0;
}