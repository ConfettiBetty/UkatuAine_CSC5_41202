/* 
  File:   main.cpp
  Author: Aine (Phyllis) Ukatu
 Created on January 4, 2016, 10:32 AM
 Purpose: Check out IDE
*/
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executive Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float payRate=1e1f;//Pay Rate in $'s/hour
    unsigned char hrsWrkd=40; //Hours worked (hrs)
 
    //Calculate or map using input or outputs
    float payChk=payRate*hrsWrkd;
    
    //Output the results
    cout<<"Pay Rate = $"<<payRate<<"'s/hr" <<endl;
    cout<<"Hours Worked = "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check = $"  <<payChk<<endl;
    //Exit
    
    return 0;

                                }