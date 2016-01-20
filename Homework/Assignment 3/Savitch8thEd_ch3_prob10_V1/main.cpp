/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 19, 2016, 9:33 AM
    Purpose:  Savitch8th Ed, Ch3 Prob 10
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Solutions to all problems    
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<< endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi,fim1,fim2;//Designations in the sequence
                unsigned short nTerms;    //Number of terms in the sequence
                unsigned short counter;   //current position in the sequence
                const char DREPRO=5;      //Days to reproduce
                float crudWt;             //Weight of crud
                unsigned int nDays;       //Number of days to grow crud
                //Initialize Sequence
                fim2=fim1=1;//start sequence
                counter=2;//Initialize counter
                //Input number of terms in sequence
                cout<<"Input the initial weight of crud in lbs"<<endl;
                cin>>crudWt;
                cout<<"How many days with the crud be allowed to grow?"<<endl;
                cin>>nDays;
                //Calculate the number of terms
                nTerms=nDays/DREPRO+1;
                //Output or calculate the output required
                if(nTerms==1){
                    cout<<"Term "<<nTerms" in the sequence = "
                    <<fim2<<endl<<endl;
                }else if(nTerms==2){
                        cout<<"Term "<<nTerms" in the sequence = "
                        <<fim2<<endl<<endl;
                }else{
                        do{
                     fi=fim1+fim2;
                     counter++;
                     fim2=fim1;
                     fim1=fi;
                }while(nTerms<counter);
                cout<<"Term "<<nTerms<<" in the sequence = "
                <<fi<<endl<<endl;
                }
                //the crud result is
                cout<<"The crud after "<<nDays<<" weighs"<<fi*crudWt<<"lbs."<<endl<<endl;
    //Exit stage right
    return 0;
}