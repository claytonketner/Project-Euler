//
//  P04.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#include <sstream>

#include "P04.h"

using namespace std;


void P04::run() {
    
    stringstream ss;
    int largest = -1;
    
    for (int i=999; i>=100; i--) {
        for (int j=i; j>=100; j--) {
            
            ss.clear();
            ss.str("");
            ss << (i*j);
            string s = ss.str();
            
                                    
            for (int strLoc=0; strLoc<s.length()/2; strLoc++) {
                if (s[strLoc] != s[s.length()-1-strLoc]) {
                    break;
                }
                
                if (strLoc >= (s.length()-1)/2) {
                    if (largest < i*j) {
                        largest = i*j;
                    }
                    break;
                }
            }
        }
    }
    
    cout << largest << "\n";
    
    return;
}