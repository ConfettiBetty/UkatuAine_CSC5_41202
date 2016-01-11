/* 
 * Author: Aine Ukatu
 * Created on January 10, 2016, 6:17PM
 * Purpose:  Homework Gaddis 9thEd Ch2, Prob1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char lethMou=5;//Amount artificial sweetener lethal to lab mouse, grams
const char massMou=35;//Mass of lab mouse, grams
const char sodMass=350;//Total mass of 1 unit soda, grams
const float q=0.001;   //Amount artificial sweetener per unit soda, grams

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int cans;        //Number of whole soda can units
    int  wtGoal;     //Desired goal weight, grams
    float  lethHum;  //Amount artificial sweetener lethal to human, grams
    
    
    //Calculate how many cans of soda are lethal
    lethHum=(5*wtGoal)/7;
    cans=(lethHum/q)*1/sodMass;
    cin>>"Welcome to the diet soda weight loss program.">>endl;
    cin>>"What is your desired weight (grams)?">>endl;
    cin>>wtGoal>>endl;
    
    
    //Output the results
    cout<<"Soda can limit = about "<<static_cast<int>(cans)<<" cans"<<endl;
    cout<<"Artificial sweetener allowance: "<<static_cast<float>(lethHum)<<"grams"<<endl;

    
    
    //Exit stage right
    return 0;
}

