#include <iostream>
#include "form.h"
using namespace std;

void Form::verschieben(double dx, double dy) {
  x += dx;
  y += dy;
}

void Form::ausgeben() {
  cout << "x: " << this->x << endl << "y: " << this->y << endl;
}
