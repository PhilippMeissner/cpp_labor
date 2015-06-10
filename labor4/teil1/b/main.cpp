#include <iostream>
#include "kunde.cpp"
using namespace std;

// Initialize class variables
int Kunde::zaehlerKunden = 1;
int Kunde::anzahlKunden = 1;
int Kunde::gesamtAnzahlEinkaeufe = 0;

void test( Kunde k ) {
 cout << "Beginn test" << endl;
 Kunde k_a("Sherlock", "Paris", 66);
 k_a.kaufe(2000);
 k_a.kaufe(250);
 k_a.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;
 //Kunde k_b( k );
 //k_b.kaufe(80);
 //k_b.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;
 cout << "Ende test" << endl;
}

int main() {
 Kunde k1("Dagobert", "Entenhausen", 50);
 k1.kaufe(1200);
 k1.kaufe(5800);
 k1.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;

 //Kunde k2( k1 );
 //cout << "Id von Kunde k2: " << k2.getKundenId() << endl;
 //k2.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;

 Kunde* k3 = new Kunde("Willi", "Berlin", 60);
 k3->kaufe(20);
 k3->kaufe(70);
 k3->kaufe(50);
 k3->print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;

 //Kunde k4 (*k3);
 //k4.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;
 //test( k2 );
 cout << "zurueck in main" << endl;
 const Kunde k5("Goofy", "Entenhausen", 18);
 //k5.kaufe(111);
 //k5.print();
 cout << "gesamte Anzahl Einkaeufe: " << Kunde::getGesamtAnzahlEinkaeufe() << endl;
 delete k3;
 return 0;
}
