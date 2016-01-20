/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 20, 2016, 8:51 AM
    Purpose: Play Rock/Paper/Scissors w/ computer V2
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants


//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Savitch 7thEd Chapter 3 Problem 1"<<endl;
    cout<<endl<<"The Rock Paper Scissors Game"<<endl;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    char computr; //Computer's play hand value
    char player;  //Player's move
    
    //Input player's turn
    do{
        cout<<"What's your move: P, R, or S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='S'));
    
    
    //Computer generated play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
        
    //Output the results
    cout<<"The computer played "<<computr<<endl;
    cout<<"The Players move "<<player<<endl;
    
    //Exit stage right
    return 0;
}