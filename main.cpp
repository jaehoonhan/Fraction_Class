//
//  main.cpp
//  Fraction Class
//
//  Created by Jae Hoon Han on 10/6/18.
//  Copyright © 2018 Jae Hoon Han. All rights reserved.

#include <iostream>
#include <string>
#include "fraction.h"

using namespace std;

    int main() {
        
        //initialize two fractions using intitializer construtor
        Fraction f1 (8,12);
        Fraction f2 (2,6);
        Fraction subresult;
        //subtract f2 from f1
        subresult = f1 - f2;
        cout<<subresult<<endl;
        
        // create two Fraction objects with default constructor
        Fraction random1;
        Fraction random2;
        //set numerator and denominator for both fractions
        random1.set_num(5);
        random1.set_den(8);
        random2.set_num(4);
        random2.set_den(7);
        Fraction multresult;
        multresult = random1 * random2;
        cout << "5/8 * 4/7 = "<<multresult<<"\n";
        
        //user input two fractions and divide
        Fraction ran1;
        Fraction ran2;
        Fraction divresult;
        int a,b,c,d;
        cout<< "Input numerator and then denominator for fraction 1";
        cin>> a >> b;
        cout<< "Input numerator and then denominator for fraction 2";
        cin>> c >> d;

        ran1.set_num(a);
        ran1.set_den(b);
        ran2.set_num(c);
        ran2.set_den(d);
        cout << a <<"/"<< b <<" / " << c << "/" << d << " = ";
        divresult = ran1 / ran2;
        cout<<divresult<<endl;
        
        
        
        cout << "Overloaded addition for 8/12 and 2/5\n";
        Fraction f6 (8,12);
        Fraction f7 (2,5);
        Fraction result;
        result = f6+f7;
        cout << "Simplified fraction: " << result << "\n";
        

        
        return 0;
    }

