#ifndef DREIECK_H
#define DREIECK_H

//#include "form.cpp"
class Dreieck {
  public:
    Dreieck(double ax, double ay, double bx, double by, double cx, double cy) : a(ax, ay), b(bx, by), c(cx, cy) {}
    void verschieben(double dx, double dy);
    void ausgeben();
  protected:
    Form a, b, c;
};

#endif
