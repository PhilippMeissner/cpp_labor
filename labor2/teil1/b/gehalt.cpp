#include <iostream>
using namespace std;

float gehalt(float stunden, float lohn = 7.5, float p = 0.33);

int main () {
  float hours, lohn, prozent;
  bool answer;
  cout << "Geben Sie die Stundenanzahl ein: ";
  cin >> hours;
  cout << "Standardwerte übernehmen?" << endl;
  cout << "[1] Ja" << endl;
  cout << "[0] Nein" << endl;
  cin >> answer;


  // Standardwerte nutzen
  if(answer) gehalt(hours);
  // Custom Berechnung
  else {
    cout << "Lohn: ";
    cin >> lohn;
    cout << "Prozente: ";
    cin >> prozent;
    gehalt(hours, lohn, prozent);
  }

  return 0;
}


float gehalt(float stunden, float lohn, float p) {
  p *= 100;

  cout << endl << "Stunden: " << stunden << endl;
  cout << "Lohn: " << lohn << endl;
  cout << "Prozente: " << p << endl;
  // TODO: Calculation
  return 1.0;
}
