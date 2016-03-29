/* Copyright 2016 Sohit Pal
 * File:   PowerTeam.cpp
 * Author: spal
 * 
 * Created on March 27, 2016, 6:13 PM
 */

#include "PowerTeam.h"

/**
 * Default Constructor, does nothing right now.
 */
PowerTeam::PowerTeam() {
    // Do nothing?
}

/**
 * Custom Constructor that takes a double.
 * @param _double Any variable of type <b>DOUBLE</b>
 */
PowerTeam::PowerTeam(const double _double) {
    this->setter(_double);
}

/**
 * Setter function to set the private double variable.
 * @param _double Any variable of type <b>DOUBLE</b>
 */
void PowerTeam::setter(const double _double) {
    this->m_VariableOfTypeDouble = _double;
}

/**
 * Getter function to get the private double variable.
 * @return the private double variable
 */
double PowerTeam::getter() {
    return this->m_VariableOfTypeDouble;
}
