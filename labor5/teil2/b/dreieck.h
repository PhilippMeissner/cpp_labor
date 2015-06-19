#ifndef DREIECK_H
#define DREIECK_H
#include <iostream>
using namespace std;

class Dreieck {
  protected:
    Form a, b, c;
  public:
    Dreieck(double ax, double ay, double bx, double by, double cx, double cy) : a(ax, ay), b(bx, by), c(cx, cy) {}

    void verschieben(double dx, double dy){
      a.verschieben(dx, dy);
      b.verschieben(dx, dy);
      c.verschieben(dx, dy);
    }

    void ausgeben() {
      cout << "A: ";
      a.ausgeben();

      cout << "B: ";
      b.ausgeben();

      cout << "C: ";
      c.ausgeben();
    }
};

#endif
