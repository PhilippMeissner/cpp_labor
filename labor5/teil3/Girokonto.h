#include <iostream>
using namespace std;

class Girokonto : public Konto {
  public:
    Girokonto(double nummer) {
      this->nummer = nummer;
      this->saldo = 0;
      this->dispo = -2000;
    }

    void ueberweisen(double wert, Girokonto& destgiro) {
      // Actually this part needs a whole lot more security measures..But well..
      if( (this->saldo - wert) > this->dispo ) {
        // Send money to destination
        destgiro.einzahlen(wert);
        // Remove money from account
        this->abheben(wert);
        cout << wert << "€ von [" << this->nummer << "] nach [" << destgiro.nummer << "] ueberwiesen" << endl;
      }
      cout << "Zu wenig Geld auf dem Konto! Ueberweisung fehlgeschlagen!" << endl;
    }

    virtual void abheben(float wert) {
      if ( (saldo - wert) > dispo ) {
        this->auszahlen(wert);
        cout << wert << "€ wurden von [" << this->nummer << "] abgehoben." << endl;
      }
      cout << "Zu wenig Geld auf dem Konto! Abheben fehlgeschlagen!" << endl;
    }

    friend std::ostream& operator<< (std::ostream& os, Girokonto g);
  private:
    double dispo;
};

std::ostream& operator<< (std::ostream& os, Girokonto g) {
  os << "[" << g.nummer << "] hat einen Saldo von " << g.saldo << endl;
  return os;
}

