#include <iostream>
#include "kreis.h"
using namespace std;

void Kreis::aufblaehen(double f) {
  r *= f;
}

void Kreis::ausgeben() {
  cout << "x: " << x << endl << "y: " << y << endl << "r: " << r << endl;
}
