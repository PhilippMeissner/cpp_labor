#include <iostream>
#include "kreis.h"
using namespace std;

Kreis::Kreis(double dx, double dy, double dr) : Form::Form(dx, dy), r(dr) {}

void Kreis::aufblaehen(double f) {
  r *= f;
}

void Kreis::ausgeben() {
  cout << "x: " << x << endl << "y: " << y << endl << "r: " << r << endl;
}
