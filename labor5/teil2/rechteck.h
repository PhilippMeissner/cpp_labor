#ifndef RECHTECK_H
#define RECHTECK_H

#include "form.cpp"
class Rechteck : public Form {
  public:
    Rechteck(double db = 0, double dh = 0, double dx = 0, double dy = 0);
    void dehnen(double fx = 1, double fy = 1);
    void ausgeben();
  protected:
    double b, h;
};

#endif
