//
//  P07.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <math.h>

#include "P07.h"

using namespace std;

void P07::run() 
{
    int numPrimes = 0;
    int workingNum = 1299709;
    bool isPrime;
    
    while (numPrimes < 1) {
        
        workingNum++;
        isPrime = true;
        
        for (int i=2; i<workingNum/2+1; i++) {
            if (workingNum % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            numPrimes++;
            
            if (numPrimes % 10000 == 0) {
                cout << numPrimes << "\n";
            }
        }
        
    }
    
    cout << "Result: " << workingNum << "\n";
    return;
}

