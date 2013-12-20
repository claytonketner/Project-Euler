//
//  P03.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <math.h>

#include "P03.h"

using namespace std;


void P03::run() {
    
    long num = 600851475143;
    long result = -1;
    bool isPrime;
    
    for (long i=sqrt(num); i>1; i--) {
                
        // If factor
        if (num%i == 0) {
            
            isPrime = true;
            
            // Test prime-ness
            for (long j=2; j<i; j++) {
                if (i%j == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                result = i;
                break;
            }
        }
    }
    
    cout << result << "\n";
    
}