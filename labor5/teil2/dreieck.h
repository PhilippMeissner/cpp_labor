#ifndef DREIECK_H
#define DREIECK_H
#include <iostream>
using namespace std;

class Dreieck {
  public:
    Dreieck(double ax, double ay, double bx, double by, double cx, double cy) : a(ax, ay), b(bx, by), c(cx, cy) {}

    Dreieck::verschieben(double dx, double dy){
      a.verschieben(dx, dy);
      b.verschieben(dx, dy);
      c.verschieben(dx, dy);
    }

    Dreieck::ausgeben() {
      cout << "A: ";
      a.ausgeben();

      cout << "B: ";
      b.ausgeben();

      cout << "C: ";
      c.ausgeben();
    }

  protected:
    Form a, b, c;
};

#endif
