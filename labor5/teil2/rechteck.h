#ifndef RECHTECK_H
#define RECHTECK_H
#include <iostream>
using namespace std;

//#include "form.cpp"
class Rechteck : public Form {
  public:
    Rechteck(double db, double dh, double dx, double dy) : b(db), h(dh), Form::Form(dx, dy) {}

    void dehnen(double fx = 1, double fy = 1) {
      b *= fx;
      h *= fy;
    }

    void ausgeben() {
      cout << "x: " << x << endl << "y: " << y << endl << "b: " << b << endl << "h: " << h << endl;
    }

  protected:
    double b, h;
};

#endif
