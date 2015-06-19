#ifndef DREIECK_H
#define DREIECK_H

#include "form.cpp"
class Dreieck {
  public:
    Dreieck(double, double, double, double, double, double);
    void verschieben(double dx, double dy);
    void ausgeben();
  protected:
    Form a, b, c;
};

#endif
