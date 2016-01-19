/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 4, 2016, 10:42 AM
    Purpose:  e to the x, e^x Calculation, Savitch8Ed, Ch3, prob11
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch8thEd Cahp3, prob11"<<endl;
    cout<<endl<<"The finite sum for e^x"<<endl<<endl;
    //Declare and initialize variables for e to the x and N factorial
    const unsigned char nTerms=13;
    float etox=1,x;//e^x
    //Input the value of x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
    //Declare N Factorial
    unsigned int factN=1;//N and N!
    
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=1;
    }
    
    //Calculate e^x with the above factorial
    etox+=pow(x,n)/factN;
    }
   
    //Output the results
    cout<<"The exact value of e^x"<<x<<"="<<exp(x)<<endl;
    cout<<"The approximate value of e^x"<<"="<<etox<<endl;

    //Exit stage right
    return 0;
}