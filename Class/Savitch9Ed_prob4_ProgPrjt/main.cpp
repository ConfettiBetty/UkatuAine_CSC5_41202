/* 
 * Author: Aine Ukatu
 * Created on January 7, 2016, 10:45 AM
 * Purpose:  How far does it drop?
 */

//System Libraries
#include <iostream> //I/O Library 
#include <cstdlib>  //Random Function
#include <cmath>    //Math functions
#include <ctime>    //Time to set at random speed
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constant
const float GRAVITY=32.174f;//Earth acceleration at sea level in ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float drpTime, distance;//Time in seconds, distance in feet
    
    //Inputting the time with a random number
    drpTime=rand()%11+10;//Range is [10,20] seconds
    
    //Calculate the distance dropped
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output length of time it takes to drop
    cout<<"Drop Time = "<<drpTime<<"sec"<<endl;
    cout<<"Distance Dropped = "<<distance<<"feet"<<endl;
    
    //Exit stage right
    return 0;
}
