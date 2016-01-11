/* 
    File:   main.cpp
    Author: A. Ukatu
    Created on January 11, 2016, 9:00 AM
    Purpose: Display Truth Table, Compare swaps
  */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    
    //Create Heading
    cout<<"X Y !X !Y X&&Y X||Y X^nY (X^nY)^nY (X^nY)^nX !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Second row
    
    x=true;y=false;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Third row
    x=false;y=true;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Fourth row
    x=false;y=false;
    
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    cout<<endl;
    //Declare and initialize swapping variables and temp
    cout<<endl;
    short a=2, b=3;
    short temp;
    cout<<"Swap values 'a' and 'b'."<<endl;
    cout<<"Before swap a = "<<a<<"and b = "<<b<<"."<<endl;
    temp=a; 
    a=b; 
    b=temp;
    cout<<"After swap, a = "<<a<<"and b = "<<b<<"."<<endl;
          
            
    
    //Initiate swap of variables
    
    
    
    //Swap using exclusive or operator
    
    //Exit stage right
    return 0;
}