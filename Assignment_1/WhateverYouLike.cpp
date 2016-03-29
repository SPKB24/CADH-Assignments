/* Copyright 2016 Sohit Pal
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WhateverYouLike.cpp
 * Author: spal
 * 
 * Created on March 27, 2016, 6:15 PM
 */

#include "WhateverYouLike.h"

/**
 * Custom Constructor that takes a double.
 * @param _double Any variable of type <b>DOUBLE</b>
 */
WhateverYouLike::WhateverYouLike(const double _double)
                : m_VariableOfTypeDoubleAgain(_double) {
    // Sleep away, the work is already done
}

/**
 * Getter function to get the private double variable.
 * @return the private double variable
 */
double WhateverYouLike::getter() {
    return this->m_VariableOfTypeDoubleAgain;
}
