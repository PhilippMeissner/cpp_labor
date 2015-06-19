#ifndef KREIS_H
#define KREIS_H

//#include "form.cpp"
class Kreis : public Form {
  protected:
    double r;
  public:
    Kreis(double dx, double dy, double dr) : Form::Form(dx, dy), r(dr) {}
    void aufblaehen(double f = 1);
    void ausgeben();
};

#endif
