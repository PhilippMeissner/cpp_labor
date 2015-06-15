#include "kunde.h"
#include <cstring>
using namespace std;

Kunde::Kunde() : kundenId(zaehlerKunden++){
  //Set values
  anzahlKunden++;
  this->name = new char[(strlen("NeuerKunde") + 1)];
  this->ort = new char[(strlen("Ort") + 1)];
  strcpy(this->name, "NeuerKunde");
  strcpy(this->ort, "Ort");
  this->alter = 20;
  this-> anzahlEinkaeufe = 0;
  this->umsatz = 0;
}

Kunde::Kunde(char* name, char* ort, int alter) : kundenId(zaehlerKunden++) {
  anzahlKunden++;
  // Set passed parameters
  this->name = new char[strlen(name) + 1];
  this->ort = new char[strlen(ort) + 1];
  strcpy(this->name, name);
  strcpy(this->ort, ort);
  this->alter = alter;
  this->anzahlEinkaeufe = 0;
  this->umsatz = 0;
}

Kunde::~Kunde() {
  anzahlKunden--;
  // Free memory
  delete[] name;
  delete[] ort;
}

// Tiefe Kopie eines Kunden erstellen
void Kunde::kopiereKunde(Kunde &k) {
  // Allocate memory
  name = new char[strlen(k.name) + 1];
  ort = new char[strlen(k.ort) + 1];
  // Copy string
  strcpy(name, k.name);
  strcpy(ort, k.ort);

  alter = k.alter;
  anzahlEinkaeufe = k.anzahlEinkaeufe;
  umsatz = k.umsatz;
}

void Kunde::kaufe(double u) {
  this->umsatz += u;
  this->anzahlEinkaeufe++;
  gesamtAnzahlEinkaeufe++;
}

int Kunde::getKundenId() {
  return this->kundenId;
}

void Kunde::print() {
  cout << this->name << " aus " << this->ort << " (ID = " << this->kundenId << ", " << this->alter << " Jahre) hatte " << this->anzahlEinkaeufe << " Einkaeufe und " << this->umsatz  << " Euro Umsatz." << endl;
}

