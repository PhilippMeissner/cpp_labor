#include "form.cpp"
// class Klassenname :: Parent1, Parent2, ..
class Kreis : public Form {
  protected:
    double r;
  public:
    Kreis(double dx = 0, double dy = 0, double dr = 0);
    void aufblaehen(double f = 1);
    void ausgeben();
};
