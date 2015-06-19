#include <iostream>
#include "dreieck.h"
using namespace std;

Dreieck::Dreieck(double ax, double ay, double bx, double by, double cx, double cy) : a(ax, ay), b(bx, by), c(cx, cy) {}

void Dreieck::verschieben(double dx, double dy){
  a.verschieben(dx, dy);
  b.verschieben(dx, dy);
  c.verschieben(dx, dy);
}

void Dreieck::ausgeben() {
  cout << "A: ";
  a.ausgeben();

  cout << "B: ";
  b.ausgeben();

  cout << "C: ";
  c.ausgeben();
}
