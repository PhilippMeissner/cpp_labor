class Konto {
  protected:
    int nummer;
    double saldo;
  public:
    void einzahlen();
    void auszahlen();
    double getSaldo();
    virtual void abheben(float summe) = 0;
};
