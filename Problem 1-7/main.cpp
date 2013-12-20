//
//  main.cpp
//  Project Euler
//
//  Created by Clayton Ketner on 3/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <time.h>

#include "P01.h"
#include "P02.h"
#include "P03.h"
#include "P04.h"
#include "P05.h"
#include "P06.h"
#include "P07.h"

using namespace std;


int main (int argc, const char * argv[])
{

    int pNum;
    
    cout << "Project number: ";
    cin >> pNum;
    
    clock_t startTime = clock();
    
    switch (pNum) {
        case 1:
            P01::run();
            break;
            
        case 2:
            P02::run();
            break;
            
        case 3:
            P03::run();
            break;
            
        case 4:
            P04::run();
            break;
            
        case 5:
            P05::run();
            break;
            
        case 6:
            P06::run();
            break;
            
        case 7:
            P07::run();
            break;
            
        default:
            cout << "Oh nairrrr!\n";
            return 1;
    }
    
    cout << "Runtime: " << 1.0*(clock() - startTime)/CLOCKS_PER_SEC << " s \n";
    
    return 0;
}

