/*!
 * @file
 */

// Copyright 2016 UMass Lowell Command and Data Handling Team

#ifndef NEWCLASS_H_
#define NEWCLASS_H_

#include "PowerTeam.h"
#include <vector>
#include <string>

class newClass {
 private:
    std::vector<PowerTeam> mPowerCell;
    double mTotalVoltage;
    double mMaxVoltage;
    double mCellVoltage;

 public:
    explicit newClass(std::vector<PowerTeam> powerCell);
    double getTotalVoltage();
    double getMaxVoltage();
    double getCellVoltage();
    void drawPower(double power);
    void rechargeCell(double power);
    void printCell();
};

#endif  // NEWCLASS_H