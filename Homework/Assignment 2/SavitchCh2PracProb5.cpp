/* 
    File:   Class Competition Jan 13, 2016
    Author: Aine Ukatu
    Created on January 13, 2016, 10:07 AM
    Purpose:  Savitch 9thEd Chap2 practice prob 1 - how many Cereal boxes
 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float MTRTON;

//Function prototypes

//Execution begins
int main(int argc, char** argv) {
    
    //Declare and initialize variables
	float ounces=1, numBox, ozPerBx;
    
    //Input data
    cout<<"How many ounces is your cereal box?"<<endl;
    cin>>ozPerBx;
    
    //Calculate or inputs to outputs
    MTRTON=35273.92*ounces; //How many ounces per metric ton
	numBox=MTRTON/ozPerBx;  //Number of cereal boxes required
    
    //Output the results
    cout<<"You need "<<numBox<<" boxes for a metric ton of cereal."<<endl;

//Exit stage right
    return 0;
}