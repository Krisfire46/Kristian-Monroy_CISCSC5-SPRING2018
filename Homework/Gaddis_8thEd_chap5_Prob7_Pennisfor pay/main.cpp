/* 
 * File:   main.cpp
 * Author:Kristian Monroy
 * Created on February 13, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int toPay, pyPrDay;//pennis of pay
    char numDays=31;
    //Initialize Variables
    
    pyPrDay=1;//1 penny on the first day
    toPay= pyPrDay;
    //Process/Map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day           Pay       Total"<<endl;
    for(int day=1;day<=numDays;day++){
        cout<<day<<setw(2)
            <<setw(12)<<pyPrDay/100.0f
            <<setw(14)<<toPay/100.0f<<endl;
        pyPrDay*=2;
        toPay+=pyPrDay;
                
    }
    //Output data
    
    //Exit stage right!
    return 0;
}