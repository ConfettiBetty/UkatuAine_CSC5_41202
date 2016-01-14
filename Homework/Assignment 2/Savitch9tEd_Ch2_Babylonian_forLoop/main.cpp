/* 
    File:   Babylonian Problem with loop Jan 14, 2016
    Author: Aine Ukatu
    Created on January 14, 2016, 10:46 AM
    Purpose:  Savitch 9thEd Chap2 practice problem2 - Babylonian Square Root
              Version 2
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    float n;//Input the value to obtain it's square root
    float r, guess; //intermediate values which asymptotically approach sqrt (n))
    float tol=0.1f; //(tolerance) accuracy of the result
    
    //Input data
    cout<<"Input the value to square root of "<<endl;
    cin>>n;
    
    //Approximate the square root at first pass
    
    guess=n/2; //Only perform this once to start the process
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;


    //Approximate the value at the second pass
    do{
        r=n/guess;
        guess=(guess+r)/2;
    }  while(abs((r-guess)/guess)*100>tol);
        
    //Output the results
 
    cout<<"The second pass r   = "<<r<<endl;
    cout<<"The second guess  = "<<guess<<endl;
    
 
    //Exit stage right
    return 0;
}
