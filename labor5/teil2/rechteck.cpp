#include <iostream>
#include "rechteck.h"
using namespace std;

Rechteck::Rechteck(double db, double dh, double dx, double dy) : b(db), h(dh), Form::Form(dx, dy) {}

void Rechteck::dehnen(double fx, double fy) {
  b *= fx;
  h *= fy;
}

void Rechteck::ausgeben() {
  cout << "x: " << x << endl << "y: " << y << endl << "b: " << b << endl << "h: " << h << endl;
}
