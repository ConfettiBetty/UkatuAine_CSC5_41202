/* 
    Author: Aine (Phyllis) Ukatu
    Created on January 26, 2016, 3:47 AM
    Purpose: Midterm problem 1
 */

//System Libraries
#include <iostream> // Input/Output
using namespace std;

int main(int argc, char** argv) {
//Declare and initialize variable 
unsigned short height; //How many stacked rows are in the X
unsigned short length; //How many adjacent columns are in the X
unsigned short x;      //Integer to input by user
x=height=length;
//Conditions
cout << "Enter the desired height of your 'X' in number of rows." << endl;
cin >> x; 
for (unsigned short x=1;x<=height;x++){
    for (unsigned short length=1;length=height;length++){
        if (length==height || length==(x+1)-height) cout<<x<<endl;
        else cout<<" "<<endl;
    }
}
return 0;
}