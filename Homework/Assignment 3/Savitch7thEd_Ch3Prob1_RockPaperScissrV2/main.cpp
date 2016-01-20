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
    
    //Set the random number seed and declare the question
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop until the player wants to quit
    do{
    
    //Declare and initialize variables
    char computr; //Computer's play hand value
    char player;  //Player's move
    char qwstion; //Question, does player want to keep playing
    
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
        
    //Output the moves by computer and player
    cout<<"The computer played "<<computr<<endl;
    cout<<"The Players move "<<player<<endl;
    
    //Determine the result
    if(computr==player)cout{
        cout<<"The result is a tie"<<endl;
    }else if(player=='P'&&computr=='R'){
            cout<<"The Player wins!"<<endl;
    }else if(player=='R'&&computr=='S'){
            cout<<"The Player wins!"<<endl;
    }else if(player=='S'&&computr=='P'){
            cout<<"The Player wins!"<<endl;
    }else{
        cout<<"The Player loses. :-("<<endl;

    //Kepp playing?
    cout<<end<<"Do you want to continue playing?"<<endl;
    cin>>qwstion;
    }while(toupper(qwstion)=='Y');
    //Exit stage right
    return 0;
}