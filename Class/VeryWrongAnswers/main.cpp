/* 
    File:   main.cpp
    Author: Aine Ukatu
    Created on January 14, 2016, 11:04 AM
    Purpose:  Producing wrong answers intentionally
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float qwntity=0.75f; //A value to add repeatedly
    float sum=0;       //The results of repetitive addition
    int nloops=10000000;        //Number of times to loop
    float answer;      //Computed answer
    
    //Input data
    
    for(int i=1;i<=nloops;i++){
        sum+=qwntity;
    }    
    
    //Calculate or map inputs to outputs
    answer=nloops*qwntity;
    
    //Output the results
    cout<<"The product answer = "<<answer<<endl;
    cout<<"The sum answer = "<<sum<<endl;
    cout<<"The percent error ="<<(answer-sum)/answer*100<<"%"<<endl;

    //Exit stage right
    return 0;
}