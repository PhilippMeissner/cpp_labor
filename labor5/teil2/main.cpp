#include <iostream>
#include "form.h"
#include "kreis.h"
#include "rechteck.h"
#include "dreieck.h"
using namespace std;

int main() {
  // Init
  Form f(1, 2);
  Kreis k(2, 3, 1);
  Rechteck r(1, 1, 3, 2);
  Dreieck d(1, 1, 2, 3, 3, 2);

  // Output
  f.ausgeben();
  k.ausgeben();
  r.ausgeben();
  d.ausgeben();

  // Output via parent

  k.Form::ausgeben();
  r.Form::ausgeben();

  // Verschieben
  f.verschieben(1, 1);
  k.Form::verschieben(2, 2);
  r.Form::verschieben(3, 3);
  d.verschieben(1, 1);

  // Blaehen & Dehnen
  k.aufblaehen(1.5);
  r.dehnen(2, 3);

  // Output
  r.ausgeben();
  k.ausgeben();
  r.ausgeben();
  d.ausgeben();

  return 0;
}
