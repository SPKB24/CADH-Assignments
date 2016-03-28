/* Copyright 2016 Sohit Pal
 * File:   PowerTeam.h
 * Author: spal
 *
 * Created on March 27, 2016, 6:13 PM
 */

#ifndef POWERTEAM_H
#define POWERTEAM_H

class PowerTeam {
 public:
    PowerTeam();
    explicit PowerTeam(const double _double);

    void setter(const double _double);
    double getter();

 private:
    double m_VariableOfTypeDouble;
};

#endif  // POWERTEAM_H
