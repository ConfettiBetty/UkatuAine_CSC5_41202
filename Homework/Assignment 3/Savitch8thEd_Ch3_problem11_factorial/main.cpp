/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 4, 2016, 10:42 AM
    Purpose:  N Factorial Calculation, Savitch8Ed, Ch3, prob11
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
    unsigned int n, factN=1;//N and N!
    
    //Input data
    cout<<"Enter the number you will like to compute for factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;
    
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=1;
    }
   
    //Output the results
    cout<<n<<"!="<<factN<<endl;
   

    //Exit stage right
    return 0;
}