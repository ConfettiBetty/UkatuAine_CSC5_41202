/* 
 * Author: Aine Ukatu
 * Created on January 6, 2016, 9:59 AM
 * Purpose:  Homework 18, chap2 Gaddis
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
    unsigned short cstSrvy=16500; //Customer Surveyed
    unsigned char  peDrnk=15;     //Percentage survey energy drinkers
    unsigned char  pcDrnk=58;    //Percentage surveyed citrus preference
    unsigned short neDrnk, ncDrnk; //Number of energy and citrus e drinkers
    
    //Calculate the number of drinkers
    neDrnk=cstSrvy*peDrnk/cnvPerc;
    ncDrnk=neDrnk*pcDrnk/cnvPerc;
    
    //Output the results
    cout<<"Number of Customers Surveyed = "<<cstSrvy<<endl;
    cout<<"Percentage of Energy Drinkers = "<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percentage of Citrus Flavor preferred = "<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "<<neDrnk<<endl;
    cout<<"Number of Energy Citrus Drinkers = "<<ncDrnk<<endl;
    
    
    //Exit stage right
    return 0;
}

