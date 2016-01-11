/* 
 * Author: Aine Ukatu
 * Created on January 10, 2016, 8:55PM
 * Purpose:  Homework Gaddis 9thEd Ch2, Prob3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const float payIn=0.076;//Fractional pay increase

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int   months;      //Number of months
    float prevSal;     //Monthly salary before pay increase, in $ USD
    float newSal;      //Monthly salary after pay increase, in $ USD
    float retPay;      //Retroactive back pay for six months, in $ USD
    float newAnn;      //Increased annual wage (12 months of pay), $ USD 
   
    
    //Calculate how much backpay owed, and new salary
    cout<<"What is your previous monthly salary?"<<endl;
    cin>>prevSal;
    cout<<"How many months of backpay are you owed?"<<endl;
    cin>>months;
    newSal=(prevSal*payIn)+prevSal;
    retPay=(prevSal*payIn)*months;
    newAnn=((prevSal*payIn)+prevSal)*12;
    
    //Output the results
    cout<<"Your new monthly salary is $"<<newSal<<"."<<endl;
    cout<<"Your new annual salary is $"<<newAnn<<"."<<endl;    
    cout<<"You are owed $"<<retPay<<" backpay."<<endl;
    
    
    //Exit stage right
    return 0;
}

