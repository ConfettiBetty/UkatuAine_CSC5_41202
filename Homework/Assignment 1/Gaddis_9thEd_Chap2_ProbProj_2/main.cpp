/* 
 * Author: Aine Ukatu
 * Created on January 10, 2016, 8:24PM
 * Purpose:  Homework Gaddis 9thEd Ch2, Prob2
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
    float prevSal;     //Monthly salary before pay increase, in $ USD
    float newSal;      //Monthly salary after pay increase, in $ USD
    float retPay;      //Retroactive back pay for six months, in $ USD
    float newAnn;      //Increased annual wage (12 months of pay), $ USD 
   
    
    //Calculate how much backpay owed, and new salary
    cout<<"What is your previous monthly salary?"<<endl;
    cin>>prevSal;
    newSal=(prevSal*payIn)+prevSal;
    retPay=(prevSal*payIn)*6;
    newAnn=((prevSal*payIn)+prevSal)*12;
    
    //Output the results
    cout<<"Your new monthly salary is $"<<newSal<<"."<<endl;
    cout<<"Your new annual salary is $"<<newAnn<<"."<<endl;    

    
    
    //Exit stage right
    return 0;
}

