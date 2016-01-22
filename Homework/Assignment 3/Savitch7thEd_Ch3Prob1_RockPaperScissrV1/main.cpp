/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 20, 2016, 8:51 AM
    Purpose: Play Rock/Paper/Scissors w/ computer
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Random function
#include <ctime>    //Time for random setting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Savitch 7thEd Chapter 3 Problem 1"<<endl;
    cout<<endl<<"The Rock Paper Scissors Game"<<endl;
    
    //Set the randomizing seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    char computr; //Computer's play hand value
    char player;  //Player's hand value
    
    //Input values for player
    do{
        cout<<"Do you want to play R, P, or S? (Enter only upper case)"<<endl;
        cin>>player;
    }while(!(player=='P')||(player=='R')||(player=='S'));
        
    //Computer generated play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
        
    //Output the results
    cout<<"The computer played "<<computr<<endl;
    cout<<"The player's move:"<<player<<endl;
    
    //Exit stage right
    return 0;
}