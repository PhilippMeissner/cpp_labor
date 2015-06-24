#include <iostream>
using namespace std;

class Sparkonto : public Konto {
  public:
    Sparkonto(double nummer) {
      this->nummer = nummer;
      this->saldo = 0;
      this->zins = 1.85;
    }

    virtual void abheben(float wert) {
      if ( (saldo - wert) > 0 ) {
        saldo -= wert;
        cout << wert << "€ wurden von [" << this->nummer << "] abgehoben." << endl;
      }
      cout << "Zu wenig Geld auf dem Konto! Abheben fehlgeschlagen!" << endl;
    }

    void jahresZinsenAddieren() {
      this->einzahlen(saldo * zins / 100);
      cout << (saldo * zins / 100) << "€ Zinsen wurden hinzugefuegt." << endl;
    }

    friend std::ostream& operator<< (std::ostream& os, Sparkonto s);

  private:
    double zins;
};

std::ostream& operator<< (std::ostream& os, Sparkonto s) {
  os << "[" << s.nummer << "] hat einen Saldo von " << s.saldo << endl;
  return os;
}

