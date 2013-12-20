//
//  P05.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>

#include "P05.h"

using namespace std;


void P05::run() {
        
    for (long num = 1; ; num++) {
        for (long i=20; i>1; i--) {
            
            if (num%i != 0) {
                break;
            }
            
            if (i == 2) {
                cout << num << "\n";
                return;
            }
        }        
    }
    
    return;
}