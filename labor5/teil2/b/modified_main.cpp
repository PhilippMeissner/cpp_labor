#include <iostream>
#include "form.h"
#include "kreis.h"
#include "rechteck_b.h"
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
  //r.Form::ausgeben();

  // Verschieben
  f.verschieben(1, 1);
  k.Form::verschieben(2, 2);
  //r.Form::verschieben(3, 3);
  d.verschieben(1, 1);

  // Blaehen & Dehnen
  k.aufblaehen(1.5);
  r.dehnen(2, 3);

  // Output
  r.ausgeben();
  k.ausgeben();
  r.ausgeben();
  d.ausgeben();


  // Field
  cout <<  endl << "Felder: " << endl;
  Form* field[2];
  field[0] = new Form(2, 3);
  field[1] = new Kreis(3, 3, 2);
  //field[2] = new Rechteck(3, 3, 2, 2);

  for(int i = 0; i < 2; i++) {
    field[i]->ausgeben();
  }

  return 0;
}
