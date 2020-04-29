//
//  fraction.cpp
//  Fraction Class
//
//  Created by Jae Hoon Han on 9/16/19.
//  Copyright © 2019 Jae Hoon Han. All rights reserved.
//
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(){
    numerator = 1;
    denominator = 1;
}
Fraction::Fraction(int n, int d){
    numerator = n;
    if (d==0){
        cout << "Cannot divide by 0." << endl;
        exit(0);
    }
    denominator = d;
}
Fraction::Fraction(const Fraction &f2){
    numerator = f2.numerator;
    denominator = f2.denominator;
}

void Fraction::set_num(int x) {
    numerator = x;
}
void Fraction::set_den(int y){
    denominator = y;
}

int Fraction::get_num(){
    return numerator;
}
int Fraction::get_den(){
    return denominator;
}
Fraction& Fraction::operator=(const Fraction &f2){
    this->numerator = f2.numerator;
    this->denominator = f2.denominator;
    return *this;
}
ostream& operator<< (ostream &os, const Fraction &f3){
    os << f3.numerator << "/" << f3.denominator;
    return os;
}

void Fraction::add(Fraction &ff1, Fraction &ff2){
    
    ff1.numerator = (ff1.numerator * ff2.denominator) + (ff2.numerator*ff1.denominator);
    ff1.denominator = (ff1.denominator * ff2.denominator);
    
}

void Fraction::sub(Fraction &ff1, Fraction &ff2){
    
    ff1.numerator = (ff1.numerator * ff2.denominator) - (ff2.numerator*ff1.denominator);
    ff1.denominator = (ff1.denominator * ff2.denominator);
    
}

void Fraction::mult(Fraction &ff1, Fraction &ff2){
    
    ff1.numerator = (ff1.numerator * ff2.numerator);
    ff1.denominator = (ff1.denominator * ff2.denominator);
    
}

void Fraction::div(Fraction &ff1, Fraction &ff2){
    
    ff1.numerator = (ff1.numerator * ff2.denominator);
    ff1.denominator = (ff1.numerator * ff2.denominator);
    
}


Fraction Fraction::simplify(){
    //for loop to find number that divides both
    for (int i =denominator * numerator; i > 1; i--) {
        if ((denominator % i == 0) && (numerator % i == 0)) {
            denominator /= i;
            numerator /= i;
            break;
        }
    }
    return *this;
}

Fraction Fraction::operator+(const Fraction &c){
    Fraction result;
    result.numerator = (this->numerator * c.denominator) + (c.numerator*this->denominator);
    result.denominator = (this->denominator * c.denominator);
    result.simplify();
    return result;
}


Fraction Fraction::operator-(const Fraction& c){
    Fraction result;
    result.numerator = (this->numerator * c.denominator) - (c.numerator*this->denominator);
    result.denominator = (this->denominator * c.denominator);
    result.simplify();
    return result;

}

Fraction Fraction::operator*(const Fraction& c){
    Fraction result;
    result.numerator = (this->numerator * c.numerator);
    result.denominator = (this->denominator * c.denominator);
    result.simplify();
    return result;
}

Fraction Fraction::operator/(const Fraction& c){
    Fraction result;
    result.numerator = (this->numerator * c.denominator);
    result.denominator = (this->numerator * c.denominator);
    result.simplify();
    return result;
}
