/* 
 * Author: Aine Ukatu
 * Created on January 10, 2016, 9:16PM
 * Purpose:  Homework Gaddis 9thEd Ch2, Prob11
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int   temp1;      //Beginning air temperature in Celsius (C)
    int   temp2;        //Ending air temperature in Celsius
    int count = 0;      //Ending air temperature in Celsius (C)
    float veloc1;     //Starting velocity, meters/second (m/s)
    float veloc2;     //Ending velocity, meters/second (m/s) 
    //Calculate the speed of sound
    cout<<"What is the starting temperature in degrees Celsius?(0 - 99)"<<endl;
    ;veloc1=333.1+0.61*temp1;
    cin>>temp1;
            
    cout<<"What is the ending temperature in degrees Celsius?"<<endl;
    cin>>temp2;
    veloc2=333.1+0.61*temp2;
    
            
    
                    while (temp1 < temp2)
                    {  
                        temp1 = temp1 + 1;temp2++;
                    }
    //Output the results
    cout<<"At "<<temp1<<" degrees Celsius the velocity of sound is "<<veloc1<<endl;

    //Exit stage right
    return 0;
}

