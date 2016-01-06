/* 
 * Author: Aine Ukatu
 * Created on January 6, 2016, 10:45 PM
 * Purpose:  Quarters, Nickels, Dime
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvQrtr=25;//Cents per quarter
const char cnvDime=10;//Cents per dime
const char cnvNckl=5;//Cents per nickel
const char cnvPnDl=100;//Conversion from pennies to dollars

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short numQtr,numNkl,numDme;//Declare inputs, number of Qs,Ns,Ds
    unsigned short total;//total
    
    //Input the number of coins
    cout<<"How many quarters do you have? 0 - 9"<<endl;
    cin>>numQtr;
    cout<<"How many dimes do you have? 0 - 9"<<endl;
    cin>>numDme;
    cout<<"How many nickels do you have? 0 - 9"<<endl;
    cin>>numNkl;
    
    //Calculate the total
    total=numQtr*cnvQrtr+numDme*cnvDime+numNkl*cnvNckl;
    
    //Output the results
    cout<<"Number of Quarters input = "<<static_cast<int>(numQtr)<<endl;
    cout<<"Number of Dimes input = "<<static_cast<int>(numDme)<<endl;
    cout<<"Number of Nickels input = "<<static_cast<int>(numNkl)<<endl;
    cout<<"The dollar amount = $"<<1.0f*total/cnvPnDl<<endl;
    
    //Exit stage right
    return 0;
}

