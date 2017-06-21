/* 
 * File:   RationalFraction.cpp
 * Author: Kyle Foley
 * Professor: Dr. Cook
 * Created on October 20, 2015, 10:04 PM
 * ***
 * Source file for RationalFractions implementing RationalFraction.h
 * Will perform simple actions: add, subtract, multiply, and divide as 
 * well as simplify on an object of type RationalFraction
 * 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "RationalFraction.h"

using namespace std;

//Constructing a RationalFraction
RationalFraction::RationalFraction (int a, int b){
    top = a;
    bottom = b;
    
    //a RationalFraction cannot have 0 as denominator
    if (b==0){
        cout << "Sorry, no zero denominator allowed!";
        cout << " Program terminating. " << endl;
        exit (1);
    }//end if
    
    if (bottom < 0) {
       top = top * -1;
       bottom = bottom * -1;
    }//end if
}// end constructor

//Method to add two RationalFractions
RationalFraction RationalFraction::add (RationalFraction one, RationalFraction two){
    int newTop;
    int newBottom;
    
    //algorithm to add fractions
    newTop = (one.top * two.bottom) + (one.bottom * two.top);
    newBottom = one.bottom * two.bottom;
    //now, 1.   Create new RF, 2. display it, 3. simplify it
    //     4.   display again, and 5. return it.
    RationalFraction newRationalFraction(newTop, newBottom);
    newRationalFraction.displayFraction();
    newRationalFraction.simplify();
    return newRationalFraction;
}//end multiply

//Method to multiply two RationalFractions
RationalFraction RationalFraction::multiply (RationalFraction one, RationalFraction two){
    int newTop;
    int newBottom;
    
    //algorithm to multiply fractions
    newTop = one.top * two.top;
    newBottom = one.bottom * two.bottom;
    //now, 1.   Create new RF, 2. display it, 3. simplify it
    //     4.   display again, and 5. return it.
    RationalFraction newRationalFraction(newTop, newBottom);
    newRationalFraction.displayFraction();
    newRationalFraction.simplify();
    return newRationalFraction;
}//end multiply

// Method to subtract one RationalFraction from another
RationalFraction RationalFraction::subtract (RationalFraction one, RationalFraction two){
    int newTop;
    int newBottom;
    
    // algorithm to subtract fractions
    newTop = (one.top * two.bottom) - (one.bottom * two.top);
    newBottom = one.bottom * two.bottom;
    //now, 1.   Create new RF, 2. display it, 3. simplify it
    //     4.   display again, and 5. return it.
    RationalFraction newRationalFraction(newTop, newBottom);
    newRationalFraction.displayFraction();
    newRationalFraction.simplify();
    return newRationalFraction;
}//end multiply

// Method to divide one RationalFraction from another
RationalFraction RationalFraction::divide (RationalFraction one, RationalFraction two){
    int newTop;
    int newBottom;
    
    // algorithm for dividing fractions
    newTop = one.top * two.bottom;
    newBottom = one.bottom / two.top;
    //now, 1.   Create new RF, 2. display it, 3. simplify it
    //     4.   display again, and 5. return it.
    RationalFraction newRationalFraction(newTop, newBottom);
    newRationalFraction.displayFraction();
    newRationalFraction.simplify();
    return newRationalFraction;
}//end multiply

//method to display fractions
void RationalFraction::displayFraction(){
    //getting decimal equivalent of RationalFraction
    float result = float (top) / float (bottom);
    
    //printing results
    cout << "Fraction is " << setw(3) << top << "/" << bottom << ". \tWhich is decimal "
            << fixed << setw(8) << setprecision(4) << result << endl;
}//end displayFraction

//Method to calculate Greatest Common Denominator to be used for simplifying
int calcGCD(int a, int b) // this is a local function, not declared in RF
{
    if (b == 0){
        return a;
    }//end if
    else{
        //recursive method of calculating GCD
        return calcGCD(b, a % b);
    }//end else
}//end calcGCD

// Method to simplify RationalFractions
void RationalFraction::simplify(){
    //debugging:
    //cout << "In simplify\n";
    
    //Storing GCD in a variable to be used
    int gcd = calcGCD(abs(top), bottom);
    //printing GCD
    cout << "GCD = " << gcd << endl;
    
    //simplifying RationalFraction using GCD
    top = top / gcd;
    bottom = bottom /gcd;
    //printing simplified RationalFraction
    cout << "Reduced =  " << setw(3) << top << "/" << bottom << endl;
}//end simplify

    