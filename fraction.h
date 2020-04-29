//
//  Header.h
//  Fraction Class
//
//  Created by Jae Hoon Han on 9/16/19.
//  Copyright © 2019 Jae Hoon Han. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <ostream>
using namespace std;

class Fraction{
public:
    //default constructor
    Fraction();
    //overloaded initializing constructor
    Fraction (int n, int d);
    //copy constructor
    Fraction(const Fraction &f2);
    //numerator set function
    void set_num(int x);
    //denominator set function
    void set_den(int y);
    //numerator get function
    int get_num();
    //denominator get function
    int get_den();
    //overloaded assigment operator
    Fraction &operator=(const Fraction &f2);
    //overloaded output operator
    friend ostream& operator<<(ostream &os, const Fraction &f3);
    //addition function
    void add (Fraction &ff1, Fraction &ff2);
    //subtraction function
    void sub (Fraction &ff1, Fraction &ff2);
    //multiply function
    void mult (Fraction &ff1, Fraction &ff2);
    //divide function
    void div (Fraction &ff1, Fraction &ff2);
    //simplify function
    Fraction simplify ();
    
    Fraction operator+(const Fraction& c);
    
    Fraction operator-(const Fraction& c);
    
    Fraction operator*(const Fraction& c);
    
    Fraction operator/(const Fraction& c);
    
private:
    int numerator;
    int denominator;
};

#endif /* Header_h */
