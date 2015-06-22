class Sparkonto : public Konto {
  public:
    Sparkonto(double nummer) {
      this->nummer = nummer;
      this->saldo = 0;
      this->zins = 1.85;
    }

    void abheben(double wert) {
      if ( (saldo - wert) > 0 ) {
        saldo -= wert;
        cout << wert << "€ wurden von [" << this->nummer << "] abgehoben." << endl;
      }
      cout << "Zu wenig Geld auf dem Konto! Abheben fehlgeschlagen!" << endl;
    }

    void jahresZinsenAddieren() {
      saldo = (saldo * ZINS / 100);
    }

    friend std::ostream& operator<< (std::ostream& os, Sparkonto s);

  private:
    double zins;
};

std::ostream& operator<< (std::ostream& os, Sparkonto s) {
  os << "[" << s.nummer << "] hat einen Saldo von " << s.saldo;
  return os;
}
