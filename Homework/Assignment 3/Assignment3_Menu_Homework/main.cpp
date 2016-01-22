/* 
    File:   main.cpp
    Author: Aine (Phyllis) Ukatu
    Created on January 4, 2016, 10:42 AM
    Purpose:  e to the x, e^x Calculation, Savitch8Ed, Ch3, prob11
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);//Universal Constant 3.1415 etc

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
        cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob11"<<endl;
        cout<<"Type 3 to Display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type 4 to Display Gaddis 8thEd Chapter 5 Problem 12"<<endl;
        cout<<"Type 5 to Display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type 6 to Display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type 7 to Display Savitch 9thEd Chapter 3 Problem 3"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi,fim1,fim2;//Designations in the sequence
                unsigned short nTerms;    //Number of terms in the sequence
                unsigned short counter;   //Current position in the sequence
                const char DREPRO=5;      //Days to reproduce
                float crudWt;             //Weight of Crud
                unsigned int nDays;       //Number of days to grow Crud
                //Initialize the sequence
                fim2=fim1=1;              //Start the sequence
                counter=2;                //Initialize the counter
                //Input the number of terms in the sequence
                cout<<"Input the the initial weight of the crud in lbs"<<endl;
                cin>>crudWt;
                cout<<"How many days will the crud be allowed to grow"<<endl;
                cin>>nDays;
                //Calculate the number of terms
                nTerms=nDays/DREPRO+1;
                //Output or calculate the output required
                if(nTerms==1){
                     cout<<"After "<<nDays<<" days the crud weighs "<<fim2*crudWt
                             <<"(lbs)"<<endl<<endl;
                }else if(nTerms==2){
                     cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt
                             <<"(lbs)"<<endl<<endl;
                }else{
                    do{
                        fi=fim1+fim2;
                        counter++;
                        fim2=fim1;
                        fim1=fi;
                    }while(counter<nTerms);
                     cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt
                             <<"(lbs)"<<endl<<endl;
                }
                break;
            }
            case 2:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob11"<<endl;
                cout<<endl<<"The finite sum for e^x"<<endl<<endl;
                //Declare and initialize variables for etox
                const unsigned char nTerms=13;
                float etox=1,x;//e^x

                //Input the value x
                cout<<"Input x of e^x computation"<<endl;
                cin>>x;

                //Calculate e^x
                for(int n=1;n<=nTerms;n++){
                    //Declare and initialize variables
                    unsigned int factN=1;//N and N

                    //Calculate the factorial
                    for(int i=1;i<=n;i++){
                        factN*=i;
                    }

                    //Calculate e^x with the above factorial
                    etox+=pow(x,n)/factN;
                }

                //Output the results
                cout<<"The exact  value of e^"<<x<<"="<<exp(x)<<endl;
                cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
                break;
            }
            case 3:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
                cout<<endl<<"The finite sum for PI"<<endl<<endl;

                //Declare and initialize variables for apprxPI
                float apprxPI=1;    //Approximate value of PI to start
                unsigned int nTerms;//Number of terms to limit sum of PI
                char sign=-1;       //Alternating sign of the PI sequence

                //Input the number of terms in the sequence
                cout<<"Input number of Terms to approximate PI"<<endl;
                cin>>nTerms;

                //Approximate PI/4
                for(int i=2,j=3;i<=nTerms;i++,j+=2){
                    apprxPI+=(sign/static_cast<float>(j));
                    sign*=-1;
                }
                apprxPI*=4;//Multiply by 4 once to approximate PI

                //Output the results
                cout<<"The exact  value of PI="<<PI<<endl;
                cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
                cout<<"The approx value of PI="<<apprxPI<<endl<<endl;
                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
            case 4:{
                //The problem to solve
                cout<<endl<<"Gaddis 8thEd Chapter 5 Problem 12"<<endl;
                cout<<endl<<"Table of Temperatures Display"<<endl<<endl;

                //Declare variables
                float slope=5.0f/9; //Slope of the line for temp conv
                char  intrcpt=-32;   //Intercept of the line is scaled by 9/5ths degrees C
                unsigned char  c1=0,c2=100,f1=32,f2=212; //Freezing and boiling temps for F and C

                //Loop to generate the degree Celsius and output the table
                cout<<"Fahrenheit    Celsius    Celsius"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                for(int f=f1;f<=f2;f=f+1){
                    float ceq=slope*(f+intrcpt); //Celsius equation
                    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1); //Celsius intercept
                    cout<<setw(9)<<f<<setw(10)<<ceq<<setw(11)<<cintrp<<endl;
    }
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}