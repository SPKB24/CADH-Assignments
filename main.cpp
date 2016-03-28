/* Copyright 2016 Sohit Pal
 * File:   main.cpp
 * Author: spal
 *
 * Created on March 27, 2016, 6:12 PM
 */

#include "PowerTeam.h"
#include "WhateverYouLike.h"
#include <iostream>

int main() {
    PowerTeam a(3.4);
    WhateverYouLike b(a.getter());
    std::cout << b.getter() << std::endl;

    return 0;
}
