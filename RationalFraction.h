/* 
 * File:   RationalFraction.h
 * Author: Kyle Foley
 * Professor: Dr. Cook
 * Created on October 20, 2015, 10:04 PM
 * ***
 * Header file for the RationalFraction program that will create a "RationalFraction"
 * object and perform operations on it.
 */



#include <string>

//RationalFraction class definition
class RationalFraction
{
public:
    RationalFraction (int a, int b); 
    // constructor
    static RationalFraction add (RationalFraction one, RationalFraction two);
    // method to add two fractions
    static RationalFraction subtract (RationalFraction one, RationalFraction two);
    // method to subtract a fraction from another fraction
    static RationalFraction multiply (RationalFraction one, RationalFraction two);
    // method to multiply two fractions
    static RationalFraction divide (RationalFraction one, RationalFraction two);
    // method to divide one fraction by another fraction
    void simplify();
    // method to simplify a fraction using GCD
    void displayFraction(); 
    //this will also reduce the fraction using GCD and give decimal equivalent
    
private:
    int top;
    // numerator
    int bottom;
    // denominator
};