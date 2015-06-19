#include <iostream>
#include "rechteck.h"
using namespace std;

void Rechteck::dehnen(double fx, double fy) {
  b *= fx;
  h *= fy;
}

void Rechteck::ausgeben() {
  cout << "x: " << x << endl << "y: " << y << endl << "b: " << b << endl << "h: " << h << endl;
}
