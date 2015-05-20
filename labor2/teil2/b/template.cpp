#include <iostream>
#include <stdlib.h>
#include <cmath>

#define Anzahl 10
#define AnzahlSearch 3

using namespace std;

template <typename T>

T search(T feld[], T find, int numfeld) {
	int i = 0;
	// Über Feld iterieren und mit gesuchtem Wert vergleichen
	while(find != feld[i] && i <= numfeld) {
		i++;
	}
	// Falls Wert gefunden, i+1 (Position 1...numfeld) zurückgeben
	if (i <= numfeld) {
		return i + 1;
	} else {
	// Ansonsten -1 als Fehlerwert.
		return -1;
	}	
}

int main(void) 
{
	int i;
	int ia[Anzahl];
	int izahl[AnzahlSearch] = {3, 5, 12};
	// Befüllen des Arrays
	for (i = 0; i < Anzahl; i++) {
		ia[i] = i + 1;
	}
	
	// Ausgabe der Suchergebnisse
	cout << "Dateityp int:" << endl;
	for (i = 0; i < AnzahlSearch; i++) {
		cout << izahl[i] << " gefunden in Position " << search(ia, izahl[i], Anzahl) << endl;
	}
	
	long la[Anzahl];
	long lzahl[AnzahlSearch] = {1, 6, 12};
	for (i = 0; i < Anzahl; i++) la[i] = i + 1;
	
	cout << endl << "Dateityp long:" << endl;
	for (i = 0; i < AnzahlSearch; i++) {
		cout << lzahl[i] << " gefunden in Position " << search(la, lzahl[i], Anzahl) << endl;
	}
	
	double da[Anzahl];
	double dzahl[AnzahlSearch] = {0.3, 0.6, 1.2};
	for (i = 0; i < Anzahl; i++) da[i] = (double)i / 10;
	
	cout << endl << "Dateityp double:" << endl;
	for (i = 0; i < AnzahlSearch; i++) {
		cout << dzahl[i] << " gefunden in Position " << search(da, dzahl[i], Anzahl) << endl;
	}
	
	return 0;
}
