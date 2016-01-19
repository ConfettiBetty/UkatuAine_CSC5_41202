/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:23 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDspl = true;//Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout << "Assignment 3 Problem Set" << endl;
        cout << "type 1 to Display Problem 1" << endl;
        cout << "type 2 to Display Problem 2" << endl;
        cout << "type 3 to Display Problem 3" << endl;
        cout << "type 4 to Display Problem 4" << endl;
        cout << "type 5 to Display Problem 5" << endl;
        cout << "type 6 to Display Problem 6" << endl;
        cout << "type 7 to Display Problem 7" << endl;
        cout << "type 8 to Display Problem 8" << endl;
        cout << "type 9 to Display Problem 9" << endl;
        cout << "type 10 to Display Problem 10" << endl;
        cout << "Type anything else to exit" << endl;
    cin >> nSoltn;
    
    //Solutions to all problems    
    switch(nSoltn){
            case 1:{
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10"<< endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
                //Declare variables
                unsigned int fi,fim1,fim2;//Designations in the sequence
                unsigned short nTerms;//Number of terms in the sequence
                unsigned short counter;//current position in the sequence
                //Initialize Sequence
                fim2=fim1=1;//start sequence
                counter=2;//Initialize counter
                //Input number of terms in sequence
                cout<<"Input the number of terms in the sequence"<<endl;
                cin>>nTerms;
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
                break;
            }
            case 2:{
             //the problem to solve
                 cout<<endl<<"Solution to Savitch8thEd Cahp3, prob11"<<endl;
    cout<<endl<<"The finite sum for e^x"<<endl<<endl;
    //Declare and initialize variables for e to the x and N factorial
    const unsigned char nTerms=13;
    float etox=1,x;//e^x
    //Input the value of x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
    //Declare N Factorial
    unsigned int factN=1;//N and N!
    
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=1;
    }
    
    //Calculate e^x with the above factorial
    etox+=pow(x,n)/factN;
    }
   
    //Output the results
    cout<<"The exact value of e^x"<<x<<"="<<exp(x)<<endl;
    cout<<"The approximate value of e^x"<<"="<<etox<<endl;
            }
                cout << "Solution to Problem 2" << endl << endl;
                break;
            }
            case 3:{
                cout << "Solution to Problem 3" << endl << endl;
                break;
            }
            case 4:{
                cout << "Solution to Problem 4" << endl << endl;
                break;
            }
            case 5:{
                cout << "Solution to Problem 5" << endl << endl;
                break;
            }
            case 6:{
                cout << "Solution to Problem 6" << endl << endl;
                break;
            }
            case 7:{
                cout << "Solution to Problem 7" << endl << endl;
                break;
            }
            case 8:{
                cout << "Solution to Problem 8" << endl << endl;
                break;
            }
            case 9:{
                cout << "Solution to Problem 9" << endl << endl;
                break;
            }
            case 10:{
                cout << "Solution to Problem 10" << endl << endl;
                break;
            }
            default:{
                cout << "Exiting the Program" << endl;
                reDspl = false;
            }
        }
    }while(reDspl);
    
    //Output the results
    
    //Exit 

    return 0;
}