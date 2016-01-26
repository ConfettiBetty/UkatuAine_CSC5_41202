/* 
  File:   main.cpp
  Author: Aine (Phyllis) Ukatu
 Created on January 25, 2016, 11:06 AM
 Purpose: Simple game of craps
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
    const unsigned int GAMES=36000;//Max number of dice throws
    
    //Frequency of our dice throws
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0,frq7=0;
    unsigned short frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short wins=0,losses=0;
    
    //Input data
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;// Gives us a number between 1 and 6
        char die2=rand()%6+1;// Gives us a number between 1 and 6
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            //Roll Again
            bool kpRln=true;
            do{
            char die1=rand()%6+1;// Gives us a number between 1 and 6
            char die2=rand()%6+1;// Gives us a number between 1 and 6
            char sum2=die1+die2;
            if(sum2==7){losses++;kpRln=false;}
            else if(sum==sum2){wins++;kpRln=false;}           
            }while(kpRln);       //Keep rolling
        }
    }
    
    //Output the results
    cout<<"Out of "<<GAMES<<" played,"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.0f*wins/GAMES<<" % of the time, and"<<endl;
    cout<<"you lost "<<100.f*losses/GAMES<<" % of the time."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    
    //Exit
    
    return 0;

                                }