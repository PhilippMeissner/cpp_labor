#ifndef RECHTECK_H
#define RECHTECK_H
#include <iostream>
using namespace std;

class Rechteck : protected Form {
  public:
    Rechteck(double db, double dh, double dx, double dy) : b(db), h(dh), Form::Form(dx, dy) {}

    void dehnen(double fx = 1, double fy = 1) {
      b *= fx;
      h *= fy;
    }

    virtual void ausgeben() {
      cout << "x: " << x << "\ty: " << y << "\tb: " << b << "\th: " << h << endl;
    }

  protected:
    double b, h;
};

#endif
