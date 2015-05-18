#include <iostream>
using namespace std;

int main() {
  int n, i;
  double pos = 0, max = 0, curr, sum = 0, *pNum;

  // n einlesen
  cout << "Wie viele Elemente sollen erzeugt werden? ";
  cin >> n;
  cout << endl << "Es werden " << n << " Elemente erzeugt." << endl;

  pNum = new double[n];

  for(i = 0; i < n; i++) {
    // Zahl einlesen
    cout << "[" << i << "] eingeben: ";
    cin >> curr;

    // Zahl speichern
    pNum[i] = curr;

    // Min/Max validieren
    if(curr > max) {
      max = curr;
      pos = i;
    }
    // Summe errechnen
    sum += curr;
  }

  // Ergebnisse ausgeben
  cout << "Max: " << max << endl << "Pos: " << pos << endl << "Summe: " << sum << endl;
  delete[] pNum;

  return 0;
}
