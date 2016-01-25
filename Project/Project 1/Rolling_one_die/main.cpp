/* 
  File:   main.cpp
  Author: Aine (Phyllis) Ukatu
 Created on January 25, 2016, 10:34 AM
 Purpose: Testing throwing a die
*/
//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //srand and ran function
#include <ctime>    //time to set random function

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executive Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int MAXTHRW=6000;//Max number of dice throws
    
    //Frequency of our dice throws
    unsigned short frq1=0,frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short total;
    
    //Input data
    
    //Throw the dice
    for(int throws=1;throws<=MAXTHRW;throws++){
        char sum=rand()%6+1;// Gives us a number between 1 and 6
        switch(sum){
            
            case 1:frq1++;break;
            case 2:frq2++;break;
            case 3:frq3++;break;
            case 4:frq4++;break;
            case 5:frq5++;break;
            case 6:frq6++;break;
            default: cout<<"Not possible"<<endl;
        }
    }
    total=frq1+frq2+frq3+frq4+frq5+frq6;
    
    //Output the results
    cout<<"The throw statistics are "<<endl;
    cout<<"1 was thrown "<<frq1<<" times."<<endl;
    cout<<"2 was thrown "<<frq2<<" times."<<endl;
    cout<<"3 was thrown "<<frq3<<" times."<<endl;
    cout<<"4 was thrown "<<frq4<<" times."<<endl;
    cout<<"5 was thrown "<<frq5<<" times."<<endl;
    cout<<"6 was thrown "<<frq6<<" times."<<endl;
    
    //Exit
    
    return 0;

                                }