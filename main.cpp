/* 
 * File:   main.cpp
 * Author: Kyle Foley
 * Professor: Dr. Cook
 * Created on October 20, 2015, 10:03 PM
 * ***
 * Main file to use RationalFraction
 */

#include <iostream>
#include <iomanip>
#include "RationalFraction.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //functions for addition
    cout << endl << "About to do an add" << endl;
    RationalFraction one (1,-2);
    one.displayFraction();
    RationalFraction two (3,4);
    two.displayFraction();
    RationalFraction answer(RationalFraction::add (one, two));
    answer.displayFraction(); 


    //functions for subtraction
    cout << endl << "About to do a subtract " << endl;
    RationalFraction three (0,50);
    three.displayFraction();
    RationalFraction four (2,50);
    four.displayFraction();
    answer = (RationalFraction::subtract (three, four));
    answer.displayFraction();

    
    //functions for multiplication
    cout << endl << "About to do a multiply" << endl;
    RationalFraction five (1,2);
    five.displayFraction();
    RationalFraction six (2,50);
    six.displayFraction();
    answer = (RationalFraction::multiply (five, six));
    answer.displayFraction();

    
    //functions for division
    cout << endl << "About to do a divide" << endl;;
    RationalFraction seven (11,234);
    seven.displayFraction();
    RationalFraction eight (1,4);
    eight.displayFraction();
    answer = (RationalFraction::divide (seven, eight));
    answer.displayFraction();

    
    return 0;
}

