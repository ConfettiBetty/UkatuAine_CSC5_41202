/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 21, 2016, 8:25 AM
    Purpose: Roman numeral conversion, Savitch9thEd_Chap3, Prob3
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
    cout<<endl<<"Savitch 9thEd Chapter 3 Problem 3"<<endl;
    cout<<endl<<"Roman Numeral Conversion"<<endl;
    
    //Declare and initialize variables
    unsigned short number=rand()%2001+1000;   //This should give range [1000,3000]
    unsigned char n1000s, n100s, n10s, n1s;   //Number of 1000s, 100s, 10s, 1s
    cout<<"The number to convert = "<<number<<endl;
    
    //Calculate number of thousands, hundreds, tens, and ones
    n1000s=(number-number%1000)/1000; //Number of thousands
    number=(number-n1000s*1000);      //Subtract away 1000s

    n100s=(number-number%100)/100;    //Number of hundreds
    number=(number-n100s*100);        //Subtract away 100s 
    
    n10s=(number-number%10)/10;       //Number of tens
    number=(number-n1000s*10);        //Subtract away 10s
    
    n1s=(number-number%1)/1;          //Number of ones
    number=(number-n1s*1);            //Subtract away 1s
    
    //Output the number and its components
    cout<<"The number of thousands = "<<static_cast<int>(n1000s)<<endl;
    cout<<"The number of hundreds = "<<static_cast<int>(n100s)<<endl;
    cout<<"The number of tens = "<<static_cast<int>(n10s)<<endl;
    cout<<"The number of ones = "<<static_cast<int>(n1s)<<endl;
        
    //Output the results
    cout<<"The Roman Numeral equivalent = ";
    
    //Output the 1000s
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    //Output the 100s
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    //Output the 10s
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }    
    //Output the 1s
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"III";
        case 2: cout<<"II";
        case 1: cout<<"I";
    }    
    //Exit stage right
    return 0;
}