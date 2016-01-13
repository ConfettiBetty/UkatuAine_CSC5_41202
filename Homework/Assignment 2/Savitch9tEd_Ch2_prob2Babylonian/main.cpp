/* 
    File:   Class Competition Jan 13, 2016
    Author: Aine Ukatu
    Created on January 13, 2016, 10:46 AM
    Purpose:  Savitch 9thEd Chap2 practice problem2 - Babylonian Square Root
 
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
    
    //Input data
    cout<<"Input the value to square root of "<<endl;
    cin>>n;
    
    //Approximate the square root at first pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
    //Approximate the square root at second
    guess=n/2; //Only perform once to start the process
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
    //Approximate the square root at third pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
    //Approximate the square root at fourth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
    //Approximate the square root at fifth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
    //Approximate the square root at sixth pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results

    cout<<"The input value             = "<<n<<endl;
    cout<<"The square root of("<<n<<") = "<<sqrt(n)<<endl;
    cout<<"The first pass r            = "<<r<<endl;
    cout<<"The first guess             = "<<guess<<endl;
    
 
    //Exit stage right
    return 0;
}
