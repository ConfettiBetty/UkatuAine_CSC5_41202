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
#include <fstream>  //Reading writing to a file
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
    ofstream out;//Declare a file stream object called "Output"
    float drpTime, distance;//Time in seconds, distance in feet
    
    //Inputting the time with a random number and opening a file
    drpTime=rand()%11+10;//Range is [10,20] seconds
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate the distance dropped
    distance=0.5f*GRAVITY*drpTime*drpTime;
    
    //Output length of time it takes to drop
    cout<<"Drop Time = "<<drpTime<<"sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the decimal to 3 places
    cout<<"Distance Dropped, multiplied squared = "<<setw(9)<<distance<<"feet"<<endl;
    
    //Calculate the distance dropped
    distance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output length of time it takes to drop
    cout<<"Drop Time = "<<drpTime<<"sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the decimal to 3 places
    cout<<"Distance Dropped, raised to a power = "<<setw(9)<<distance<<"feet"<<endl;
    
     //Calculate the distance dropped
    distance=0.5f*GRAVITY*exp(2*log(drpTime));
    
    //Output length of time it takes to drop
    cout<<"Drop Time = "<<drpTime<<"sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the decimal to 3 places
    cout<<"Distance Dropped, exponential of the log = "<<setw(9)<<distance<<"feet"<<endl;
    
    //Output results to a file
    out<<fixed<<setprecision(3)<<showpoint;//Format the decimal to 3 places
    out<<"Distance Dropped, exponential of the log = "<<setw(9)<<distance<<"feet"<<endl;
    
    //Exit stage right
    out.close();
    return 0;
}
