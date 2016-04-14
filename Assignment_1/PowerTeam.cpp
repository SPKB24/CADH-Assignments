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
    // Set the voltage to 5 by default
    this->setVoltage(5.0);
}

/**
 * Custom Constructor that takes a double.
 * @param _double Any variable of type <b>DOUBLE</b>
 */
PowerTeam::PowerTeam(const double _double) {
    this->setVoltage(_double);
}

/**
 * Setter function to set the private double variable.
 * @param _double Any variable of type <b>DOUBLE</b>
 */
void PowerTeam::setVoltage(const double _double) {
    this->level = _double;
}

/**
 * Getter function to get the private double variable.
 * @return the private double variable
 */
double PowerTeam::getVoltage() {
    return this->level;
}
