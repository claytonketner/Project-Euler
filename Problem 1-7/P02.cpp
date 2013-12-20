//
//  P02.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>

#include "P02.h"

using namespace std;


void P02::run() {
    
    int sum = 0;
    int first = 1;
    int second = 2;
    int temp;
    
    while (second <= 4000000) {
        
        if (second%2 == 0) {
            sum += second;
        }
        
        temp = first + second;
        first = second;
        second = temp;
    }
    
    cout << sum << "\n";
    
    return;
}