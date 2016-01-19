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
    //Declare and initialize variables for e to the x and N factorial
    const unsigned char nTerms=13;
    float tol=1e-3f,term=1,etox=1,x;//e^x
    float nTerm=1;//Counter to determine how many terms
    //Input the value of x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    do{
        term*=x/nTerm++;
        etox+=term;
    }while(term>tol);
   
    //Output the results
    cout<<"The exact value of e^x"<<x<<"="<<exp(x)<<endl;
    cout<<"The number of terms it took to approximate e^x"<<x<<"="<<nTerm<<endl;
    cout<<"The approximate value of e^x"<<"="<<etox<<endl;

    //Exit stage right
    return 0;
}