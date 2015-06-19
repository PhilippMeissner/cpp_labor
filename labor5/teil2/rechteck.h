#ifndef RECHTECK_H
#define RECHTECK_H

//#include "form.cpp"
class Rechteck : public Form {
  public:
    Rechteck(double db, double dh, double dx, double dy) : b(db), h(dh), Form::Form(dx, dy) {}
    void dehnen(double fx = 1, double fy = 1);
    void ausgeben();
  protected:
    double b, h;
};

#endif
