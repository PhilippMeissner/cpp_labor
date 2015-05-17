#include <iostream>
using namespace std;


int main() {
  int n, i = 0;
  double min = 0, max = 0, curr, sum = 0;
  cout << "Wie viele Elemente sollen erzeugt werden?  ";
  cin >> n;
  cout << "Es werden " << n << " Elemente erzeugt." << endl;
  // Array mit n-Feldern deklarieren
  double array[n];

  // n-Zahlen eingeben lassen
  while(i < n) {
    cout << "[" << i << "] eingeben: ";
    cin >> curr;
    // Array befüllen
    array[i] = curr;
    // Max/Min validieren
    if(i == 0) min = curr;
    if(curr > max) max = curr;
    if(curr < min) min = curr;
    // Summe errechnen
    sum += curr;
    // Zähler erhöhen
    i++;
  }

  cout << "Max: " << max << "\nMin: " << min << endl;
  cout << "Summe: " << sum << endl;

  return 0;
}
