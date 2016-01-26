/* 
  File:   main.cpp
  Author: Aine (Phyllis) Ukatu
 Created on January 25, 2016, 8:35 AM
 Purpose: Power Function example
*/
//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int power(int,int);

//Executive Begins Here
int main(int argc, char** argv) {
    //Variables o be used in timing
    //Beginning and ending of integer vs double function
    unsigned int begi,endi,begd,endd,loop=100000000;
    
    
    //Declare and initialize variables
    int x;//Base of the problem
    int y;//Exponent of the problem
    int z;//The result of a^b
    
    //Input data
    cout<<"Input a and b for a^b?"<<endl;
    cin>>x>>y;
    
    //Calculate or map using input or outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;1++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Our functions are called "<<loop<<" times"<<endl;
    cout<<"Our function result"<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<" seconds"<<endl;
    
    //Compare our function with the cmath library function
    double dx=x;//Copy into a double
    double dy=y;//Copy into a double
    double dz;
    
    //Call math library funtion
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;1++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
   
    //Output the results
    cout<<"Library Function Result "<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time taken = "<<endd-begd<<" seconds "<<endl;
    
    
    //Exit
    
    return 0;

}
//000000000111111111122222222223333333333444444444455555555556666666666777777777
//324567890123456789012345678901234567890123456789012345678901234567890123456789
/*                                Power Function                              */
//Inputs
// a-> Integer Base
// b-> Integer Power-Exponent
//Output
// c-> Integer z=a^b
int power(int a,int b){
    if(b<=0) return 1;
    if (b==1)return a;
    int abd2=pow(a,b/2);
    if (b%2)return abd2*abd2*a; //If even
    return abd2*abd2;       //If odd
}