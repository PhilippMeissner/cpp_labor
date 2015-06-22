#include "Konto.h"
#include "Sparkonto.h"
#include "Girokonto.h"
#include <iostream>
using namespace std;

int main() {
  // ein paar Experimente mit einem Girokonto
  // ----------------------------------------
  // Konto anlegen
  Girokonto girokonto1(111111);

  // Geld einzahlen
  girokonto1.einzahlen(1344.99);
  cout << girokonto1 << endl;

  // erfolgreich Geld abheben
  girokonto1.abheben(2000);
  cout << girokonto1 << endl << endl;
  Girokonto* girokonto2 = new Girokonto(222222);
  //cout << *girokonto2 << endl << endl;
  cout << (*girokonto2) << endl << endl;

  // erfolgreicher Überweisungsversuch
  girokonto1.ueberweisen(850, *girokonto2);
  cout << girokonto1 << endl;
  cout << *girokonto2 << endl << endl;

  // vergeblicher Überweisungsversuch
  girokonto1.ueberweisen(5000, *girokonto2);
  cout << girokonto1 << endl;
  cout << *girokonto2 << endl << endl;
  cout << endl;

  // ein paar Experimente mit einem Konto
  // ------------------------------------
  // Konto anlegen
  // Konto k(12345); Abstrakte Klasse kann nicht instanziiert werden

  // Geld einzahlen
  // k.einzahlen( 1000.0 );
  // cout << k << endl;

  // Geld auszahlen
  // k.auszahlen( 500.0 );
  // cout << k << endl << endl;// ein paar Experimente mit einem Sparkonto

  // ----------------------------------------
  // Konto anlegen
  Sparkonto sparkonto(333333);

  // Geld einzahlen
  sparkonto.einzahlen(2346.88);
  cout << sparkonto << endl << endl;

  // erfolgreich Geld abheben
  sparkonto.abheben(2000);
  cout << sparkonto << endl << endl;

  // Zins-Tag!
  sparkonto.jahresZinsenAddieren();
  cout << sparkonto << endl;

  return 0;
}
