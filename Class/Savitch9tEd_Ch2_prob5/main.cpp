/* 
    File:   Class Competition Jan 13, 2016
    Author: Aine Ukatu
    Created on January 13, 2016, 10:07 AM
    Purpose:  Savitch 9thEd Chap2 prob 5 - Capacity of the room
 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins
int main(int argc, char** argv) {
    
    //Declare and initialize variables problem 1
    const unsigned char MAXCAP=35; //Max capacity of the room
    unsigned short stsUtil; //Seats utilized
    char delta; //difference between capacity and utilization
    
    //Input data
    cout<<"How many seats are being utilized in Bus Ed. Room 200?"<<endl;
    cin>>stsUtil;
    
    //Calculate or map inputs to outputs
    delta=MAXCAP-stsUtil;
    
    //Output the results

    cout<<"Maximum Room Capcity of BE200 = "<<static_cast<int>(MAXCAP)
        <<" seats "<<endl;
    if(delta>=0){
        cout<<"Class will be held";
        cout<<static_cast<int>(delta)<<" available seats remain";
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage capcity utilized = "<<100.00f*stsUtil/MAXCAP<<"%"<<endl;
    }else{
        cout<<"Room Capacity has been exceeded";
        cout<<static_cast<int>(-delta)<<"  students need to leave."<<endl;
    }
 
    //Exit stage right
    return 0;
}
