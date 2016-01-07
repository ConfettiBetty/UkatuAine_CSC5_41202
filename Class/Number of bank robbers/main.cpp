/* 
 * Author: Aine Ukatu
 * Created on January 6, 2016, 11:35 AM
 * Purpose:  In class assignment, How many criminals does it take?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char WTBILL=1;//Mass in grams
const float CNVLBS=1.0f/453.5f;//Conversion from grams to pounds

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare 
    unsigned int amtStl;//Amount to steal
    unsigned short denom;//Bill denomination
    unsigned char wtPers=80;//Weight a person can carry
    unsigned char nPerps;//Number of criminals
    
    //Input the number of coins
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<"What bill denomination do you desire?"<<endl;
    cin>>denom;
    
    
    //Calculate the total
    nPerps=CNVLBS*amtStl*WTBILL/denom/wtPers+1;
    
    //Output the results
    cout<<"Amount desired = $"<<amtStl<<endl;
    cout<<"Denomination desired = $"<<denom<<endl;
    cout<<"Number of people required for job = "<<static_cast<int>(nPerps)<<endl;
    
    //Exit stage right
    return 0;
}
