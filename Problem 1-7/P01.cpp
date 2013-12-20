//
//  P01.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>

#include "P01.h"

using namespace std;


void P01::run()
    {
        int sum = 0;
        
        for (int i=0; i<1000; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }
        
        cout << sum << "\n";
        
        return;
    }
