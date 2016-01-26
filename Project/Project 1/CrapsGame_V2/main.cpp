/* 
  File:   main.cpp
  Author: Aine (Phyllis) Ukatu
 Created on January 25, 2016, 11:31 AM
 Purpose: Game of craps V2
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
    unsigned short wins=0,losses=0;
    
    //Input data
    cout<<"How many games of craps would you like to play?"<<endl;
    cout<<"Type a number between 10,000 and 40,000."<<endl;
    cin>>games;
    while(games<10000||games>40000){
        
    }
    
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
                die1=rand()%6+1;// Gives us a number between 1 and 6
                die2=rand()%6+1;// Gives us a number between 1 and 6
                char sum2=die1+die2;
                switch(sum2==7){
                    case true:{losses++;kpRln=false;}
                    default:
                        if(sum==sum2){wins++;kpRln=false;}             
            }
            }while(kpRln);       //Keep rolling
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