#ifndef KREIS_H
#define KREIS_H
#include <iostream>
using namespace std;

class Kreis : public Form {
  protected:
    double r;
  public:
    Kreis(double dx = 0, double dy = 0, double dr = 0) : Form::Form(dx, dy), r(dr) {}
    void aufblaehen(double f = 1) { r *= f; }
    virtual void ausgeben() {
      cout << "x: " << x << endl << "y: " << y << endl << "r: " << r << endl;
    }
};

#endif
