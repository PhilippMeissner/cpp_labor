#include <iostream>
#include "form.h"
using namespace std;

Form::Form(double x0, double y0) : x(x0), y(y0) {};

void Form::verschieben(double dx, double dy) {
  x += dx;
  y += dy;
}

void Form::ausgeben() {
  cout << "x: " << this->x << endl << "y: " << this->y << endl;
}
