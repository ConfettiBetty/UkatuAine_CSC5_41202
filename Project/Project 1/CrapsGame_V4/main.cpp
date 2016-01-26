/* 
 Author: Aine (Phyllis) Ukatu
 Created on January 26, 2016, 10:22 AM
 Purpose: Game of craps V4
*/
//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //srand and ran function
#include <ctime>    //time to set random function
#include <fstream>  //File I/O
#include <iomanip>  //Formatting

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executive Begins Here
int main(int argc, char** argv) {
    //Include more players!  That's an idea.
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int LIMIT=1500; //Single bet table limit = $1500
    unsigned short wins=0,losses=0,games;
    float wallet,bet;//$'s
    char yes;//Character to answer if winning double the bet
    ofstream out;
    //Open File
    out.open("CardGame.dat");
    
    //Input data and validate
    cout<<"How many games of craps would you like to play?"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000."<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How many games of craps would you like to play?"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000."<<endl;
        cin>>games;
    }
    cout<<"How much do you have to gamble?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet per game?"<<endl;
    cin>>bet;
    cout<<"If you win, would you like to double your bet? (y/n)"<<endl;
    cin>>yes;
    
    //Modify the bet based upon the table limit
    bet=bet<LIMIT?bet:LIMIT;// This is a ternary operator, won't allow bet>LIMIT
    
    //Throw the dice
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;// Gives us a number between 1 and 6
        char die2=rand()%6+1;// Gives us a number between 1 and 6
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12){
            losses++;
            wallet-=bet;
        }else if(sum==7||sum==11){
            wins++;
            wallet+=bet;
            bet=yes=='y'?2*bet:bet;//Another Ternary operator
            bet=bet<LIMIT?bet:LIMIT;//A ternary operator, won't allow bet>LIMIT
        }else{
            //Roll Again
            bool kpRln=true;
            do{
                die1=rand()%6+1;// Gives us a number between 1 and 6
                die2=rand()%6+1;// Gives us a number between 1 and 6
                char sum2=die1+die2;
                switch(sum2==7)
                    case true:{
                        losses++;
                        wallet
                    default:
                        if(sum==sum2){
                            wins++;kpRln=false;} 
                        }
            }while(kpRln);       //Keep rolling
        }
    }
    
    //Output the results to screen
    cout<<"Out of "<<games<<" played,"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.0f*wins/games<<" % of the time, and"<<endl;
    cout<<"you lost "<<100.f*losses/games<<" % of the time."<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"My wallet contains $"<<wallet<<endl;
    cout<<"My bets were = $"<<bet<<endl;
    
    //Output the results to a file
    out<<"Out of "<<games<<" played,"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    out<<"You won "<<100.0f*wins/games<<" % of the time, and"<<endl;
    out<<"you lost "<<100.f*losses/games<<" % of the time."<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    
    out.close("CardGame.dat");
    
    
    //Exit
    
    return 0;

                                }