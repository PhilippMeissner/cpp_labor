class Konto {
  protected:
    int nummer;
    double saldo;

  public:
    void einzahlen(double wert) {
      saldo += wert;
    }

    void auszahlen(double wert) {
        this->saldo -= wert;
    }

    double getSaldo() {
      return this->saldo;
    }

    virtual void abheben(float summe) = 0;
};
