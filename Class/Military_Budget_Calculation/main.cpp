/* 
 * Author: Dr. Mark E. Lehr
 * Created on January 5, 2016, 9:20 PM
 * Purpose:  Calculated Military Budget Percentage
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvPerc=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float milBdgt=581e9f;//Military Budget of 581 Billion Dollars
    float fedBdgt=3.8e12f;//Federal Budget of 3.8 Trillion Dollars
    float percNil;         //Declaration for the calculation %
    
    //Calculate the percentage for the military budget
    percMil=milBdgt/fedBdgt*cnvPerc;
    
    //Output the results
    cout<<"The Military budget = $"<<milBdgt<<endl;
    cout<<"The Federal budget = "<<fedBdgt<<endl;
    cout<<"The percentage of the Federal Budget attributed to the Military = ";
    cout<<percNil<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

