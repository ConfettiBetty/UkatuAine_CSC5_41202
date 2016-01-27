/* 
    Author: Aine (Phyllis) Ukatu
    Created on January 26, 2016, 4:48 AM
    Purpose: Midterm Problem 2
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Midterm Problem 2"<<endl;
    cout<<endl<<"4 character number conversion"<<endl<<endl;
  
    //Declare and initialize variables
    unsigned short number;
    unsigned char n1000s, n100s, n10s, n1s;   //Number of 1000s, 100s, 10s, 1s
        
    //Calculate number of thousands, hundreds, tens, and ones
    n1000s=(number-number%1000)/1000; //Number of thousands
    number=(number-n1000s*1000);      //Subtract away 1000s

    n100s=(number-number%100)/100;    //Number of hundreds
    number=(number-n100s*100);        //Subtract away 100s 
    
    n10s=(number-number%10)/10;       //Number of tens
    number=(number-n1000s*10);        //Subtract away 10s
    
    n1s=(number-number%1)/1;          //Number of ones
    number=(number-n1s*1);            //Subtract away 1s
    
    //Input entry
    cout<<"What number do you wish to convert?"<<endl;
    cin>>number;
    
    //Output the number and its components
    cout<<"1st row of asterisks has "<<static_cast<int>(n1s)<<" stars."<<endl;
    cout<<"2nd row of asterisks has "<<static_cast<int>(n10s)<<" stars."<<endl;
    cout<<"3rd row of asterisks has "<<static_cast<int>(n100s)<<" stars."<<endl;
    cout<<"4th row of asterisks has "<<static_cast<int>(n1000s)<<" stars."<<endl;
    
    //Output the heading
    cout<<"The asterisks printout for "<<number<<" = ";
    
        //Output the row corresponding to fourth digit
    switch(n1s){
        case 9: cout<<"*********";
        case 8: cout<<"********";
        case 7: cout<<"*******";
        case 6: cout<<"******";
        case 5: cout<<"*****";
        case 4: cout<<"****";
        case 3: cout<<"***";
        case 2: cout<<"**";
        case 1: cout<<"*";
    }    
        //Output the row corresponding to third digit
    switch(n10s){
        case 9: cout<<"*********";
        case 8: cout<<"********";
        case 7: cout<<"*******";
        case 6: cout<<"******";
        case 5: cout<<"*****";
        case 4: cout<<"****";
        case 3: cout<<"***";
        case 2: cout<<"**";
        case 1: cout<<"*";
    }    
        //Output the row corresponding to second digit
    switch(n100s){
        case 9: cout<<"*********";
        case 8: cout<<"********";
        case 7: cout<<"*******";
        case 6: cout<<"******";
        case 5: cout<<"*****";
        case 4: cout<<"****";
        case 3: cout<<"***";
        case 2: cout<<"**";
        case 1: cout<<"*";
    }
        //Output the row corresponding to first digit
    switch(n1000s){
        case 9: cout<<"*********";
        case 8: cout<<"********";
        case 7: cout<<"*******";
        case 6: cout<<"******";
        case 5: cout<<"*****";
        case 4: cout<<"****";
        case 3: cout<<"***";
        case 2: cout<<"**";
        case 1: cout<<"*";
    }
    //Exit stage right
    return 0;
}