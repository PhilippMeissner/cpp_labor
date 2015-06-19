#ifndef FORM_H
#define FORM_H
#include <iostream>
using namespace std;

class Form {
  public:
    Form(double x0, double y0) : x(x0), y(y0) {}
    void verschieben(double dx, double dy) {
      x += dx;
      y += dy;
    }

    virtual void ausgeben() {
      cout << "x: " << this->x << "\ty: " << this->y << endl;
    }

  protected:
    double x, y;
};

#endif
