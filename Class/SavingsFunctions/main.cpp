/* 
    Author: Aine Ukatu
    Created on January 26, 2016, 8:44 AM
    Purpose: Savings Function Variation Theme
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cmath>    //Power, Exponential, and Log Function
#include <cstdlib>  //Random, srand, and time function
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;         //Convert (Decimal to Percentage)

//Function prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    float pv=rand()%9001+1000;      //Random value from 1000 to 10,000
    float intRate=rand()%11+5;      //Random value between 5 and 15 percent
    int   nCmpd=rand()%16;          //Random value between 0 and 15 years
        
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The interest rate = "<<intRate<<"%"<<endl;
    cout<<"The number of years = "<<static_cast<int>(nCmpd)<<endl;
        
    //Output the results
    cout<<"The savings using the Power Function            = $"
            <<save1(pv, intRate/PERCENT,nCmpd)<<endl;
    cout<<"The savings using the Exponent and Log Function = $"
            <<save2(pv, intRate/PERCENT,nCmpd)<<endl;
    cout<<"The savings using For-loops                     = $"
            <<save3(pv, intRate/PERCENT,nCmpd)<<endl;
    cout<<"The banking version, using for-loops            = $"
            <<save4(pv, intRate/PERCENT,nCmpd)<<endl;

    //Exit stage right
    return 0;
}
//111111112222222222333333333444444444455555555556666666666777777777788888888889
//345678901234567890234567890123456789012345678901234567890123456789012345678901
/*******************************SAVE1 FUNCTION*********************************/
//Inputs
// p-> Present value in $'s
// i-> Interest Rate in %
// n-> Number of compounding periods
//Output
// fv-> Future Value in $'s
//Note: Using the power function
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}
//111111112222222222333333333444444444455555555556666666666777777777788888888889
//345678901234567890234567890123456789012345678901234567890123456789012345678901
/*******************************SAVE2 FUNCTION*********************************/
//Inputs
// p-> Present value in $'s
// i-> Interest Rate in %
// n-> Number of compounding periods
//Output
// fv-> Future Value in $'s
//Note: Using the power function
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}
//111111112222222222333333333444444444455555555556666666666777777777788888888889
//345678901234567890234567890123456789012345678901234567890123456789012345678901
/*******************************SAVE3 FUNCTION*********************************/
//Inputs
// p-> Present value in $'s
// i-> Interest Rate in %
// n-> Number of compounding periods
//Output
// fv-> Future Value in $'s
//Note: Using the power function
float save3(float p,float i,int n){
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}
//111111112222222222333333333444444444455555555556666666666777777777788888888889
//345678901234567890234567890123456789012345678901234567890123456789012345678901
/*******************************SAVE4 FUNCTION*********************************/
//Note: Banking Implementation
//Inputs
// p-> Present value in $'s
// i-> Interest Rate in %
// n-> Number of compounding periods
//Output
// fv-> Future Value in $'s
//Note: Using the power function
float save4(float p,float i,int n){
    int ip=p*PERCENT;//Place the Value in pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;//Returning it to dollars
    return p;
}