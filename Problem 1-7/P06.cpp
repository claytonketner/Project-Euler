//
//  P03.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <math.h>

#include "P06.h"

using namespace std;


void P06::run() {
    int sumSq = 0;
    int sqSum = 0;
    
    for (int i=1; i<=100; i++) {
        sqSum += i;
        sumSq += (int)pow(i, 2);
    }
    
    sqSum *= sqSum;
    
    cout << -sumSq + sqSum << "\n";
}