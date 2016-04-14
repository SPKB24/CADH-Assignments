/* Copyright 2016 Sohit Pal
 * File:   main.cpp
 * Author: spal
 *
 * Created on March 27, 2016, 6:12 PM
 */

#include "PowerTeam.h"
#include "WhateverYouLike.h"
#include "newClass.h"
#include <iostream>
#include <vector>

using namespace std;

void magicDrain(newClass* thing);
void magicFill(newClass* thing);

int main() {
    // Create a vector of 4 PowerTeam objects
    // Each PowerTeam's level will be set to 5 by default
    vector<PowerTeam> vecPowerTeam(4);
    newClass newObject(vecPowerTeam);
    
    newObject.printCell();
    
    magicDrain(&newObject);
    
    newObject.printCell();

    cout << "-------------" << endl;
    
    magicFill(&newObject);
    newObject.printCell();
    
    return 0;
}

// drain
void magicDrain(newClass* thing) {
    
    for (size_t i = 0; i < 4; i++) {
        (*thing).drawPower(8);
    }
}

void magicFill(newClass* thing) {
     for (size_t i = 0; i < 4; i++) {
        (*thing).rechargeCell(7);
     }
}