#ifndef KREIS_H
#define KREIS_H

#include "form.cpp"
class Kreis : public Form {
  protected:
    double r;
  public:
    Kreis(double dx = 0, double dy = 0, double dr = 0);
    void aufblaehen(double f = 1);
    void ausgeben();
};

#endif
