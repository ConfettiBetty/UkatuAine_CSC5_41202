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
#include <fstream>  //File I/O

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executive Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    //Frequency of our dice throws
    unsigned short wins=0,losses=0;
    ofstream out;
    //Open File
    out.open("CardGame.dat");
    
    //Input data
    
    //Throw the dice
    for(int game=1;game<=games;game++){
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
                switch(sum2==7)
                    case true:{losses++;kpRln=false;}
                    default:
                        if(sum==sum2){case true: {wins++;kpRln=false;} 
                        }
            }while(kpRln);       //Keep rolling
        }
    }
    
    //Output the results
    cout<<"Out of "<<games<<" played,"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.0f*wins/games<<" % of the time, and"<<endl;
    cout<<"you lost "<<100.f*losses/games<<" % of the time."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    
    //Output the results to a file
    out<<"Out of "<<games<<" played,"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    out<<"You won "<<100.0f*wins/games<<" % of the time, and"<<endl;
    out<<"you lost "<<100.f*losses/games<<" % of the time."<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    
    out.close("CardGame.dat");
    
    
    //Exit
    
    return 0;

                                }