/* 
 * File:   main.cpp
 * Author: Kristian Monroy
 * Created on March 29, 2018,  PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
const float GRAVITY=6.673e-8;
const float CMMTRS=0.01;
const float SLGSGM=14593.0f;
const float MTRSFT=3.28f;
const float LBSLUG=32.174F;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, msEarth, rEarth, myWt, myWtcnv;
    //Initialize Variables
    myMass=6;
    myWtcnv=myMass*LBSLUG;
    msEarth=5.972e27f;
    rEarth=6.371e6f;
    //Process/Map inputs to outputs
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS
                    *myMass*msEarth*MTRSFT
                    /(rEarth*rEarth);
    
    //Output data
    cout<<fixed<<setprecision(0);
    cout<<myMass<<"slugs ="<<myWt<<" lbs"<<endl;
    cout<<myMass<<"slugs = "<<myWtcnv<<" lbs"<<endl;
    //Exit stage right!
    return 0;
}