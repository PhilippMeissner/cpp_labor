class Form {
  public:
    Form(double x0 = 0, double y0 = 0);
    void verschieben(double dx, double dy);
    void ausgeben();
  protected:
    double x, y;
};
