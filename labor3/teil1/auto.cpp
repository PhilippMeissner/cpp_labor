#include <iostream>
#include <string>
using namespace std;

class Auto {
  private:
    static int anzahl;
    int leistung;
    char* fabrikat;
  public:
    Auto() {
      raiseAnzahl();
      cout << "Standardkonstruktor" << endl;
    }

    ~Auto() {
      lowerAnzahl();
      cout << "Destruktor" << endl;
    }

    Auto(int iLeistung) {
      raiseAnzahl();
      leistung = iLeistung;
      cout << "Überladener Konstruktor" << endl;
    }

    void raiseAnzahl() {
      anzahl++;
      cout << "[" << getAnzahl() << "] ";
    }

    void lowerAnzahl() {
      anzahl--;
      cout << "[" << getAnzahl() << "] ";
    }

    void print() {
      cout << "Leistung: " << this->leistung << endl;
    }

    static int getAnzahl() {
      return anzahl;
    }

    void setLeistung(int lei) {
      leistung = lei;
    }

    void setFabrikat() {
    }
};

// Needed to get rid of "undefined reference" error
int Auto::anzahl = 0;

int main() {
  int n, lei;
  cout << "Anzahl der Autos: ";
  cin >> n;
  Auto *car = new Auto[n];

  // Eingabe
  cout << endl << "========== Eingabe =========" << endl;
  for(int i = 0; i < n; i++) {
    cout << "[Auto " << i+1 << "]" << endl;
    cout << "Wählen Sie die Leistung: ";
    cin >> lei;
    car[i].setLeistung(lei);
    cout << endl;
  }

  // Ausgabe
  cout << "============================" << endl;
  cout << "========== Ausgabe =========" << endl << endl;
  for(int i = 0; i < n; i++) {
    cout << "[Auto " << i+1 << "]" << endl;
    car[i].print();
  }

  // Second
  cout << endl << "============================" << endl;
  cout << "============ 2. ============" << endl << endl;

  Auto second_car[] = {Auto(10), Auto(11), Auto(12)};
  cout << "============================" << endl;
  cout << "========== Ausgabe =========" << endl;

  for(int i = 0; i < 4; i++) {
    cout << "[Auto(INIT) " << i+1 << "]" << endl;
    cout << "Kontrolle:" << endl;
    second_car[i].print();
    cout << endl;
  }

  delete[] car;
  return 0;
}
