/* 
 * Author: Aine Ukatu
 * Created on January 17, 2016, 10:45 PM
 * Purpose:  Absent excuse Note, Savitch9thEd, Ch2, prob4
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
 
    //Declare and initialize variables
    char frstNam; //Instructor's First Name
    char myNam;//Student's First Name
    char food;//A food
    short number;//Any number between 100 and 120
    char color;//Any color
    char animal;//Any animal
 
    //Set parameter
    number>=100,number<=120;"Invalid entry, please pick a number between 100 and 120.";
 
    //Ask the survey questions
    cout<<"What is your instructor's first name?"<<endl;
     cin>>frstNam;
    cout<<"What is your name?"<<endl;
     cin>>myNam;
    cout<<"Pick a food, any food."<<endl;
     cin>>food;
    cout<<"Pick a number between 100 and 120."<<endl;
     cin>>number;
    cout<<"Type any color."<<endl;
     cin>>color;
    cout<<"Choose any animal."<<endl;
     cin>>animal;
 
    //Print out message
    cout<<"Dear Instructor "<<frstNam<<",\n";
    cout<<"\n";
    cout<<"I am sorry that I am unable to to turn in my homework at this time. First,\n";
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I\n";
    cout<<"came down with a fever of "<<number<<". Next, my pet "<<animal<<" must have\n";
    cout<<"smelled the remains of the "<<food<<" on my homework, because she ate it.\n";
    cout<<"I am currently rewriting my homework and hope you will accept it late.\n";
    cout<<"\n";
    cout<<"Sincerely,\n";
    cout<<myNam;
 
    //Exit program
    return 0;
}