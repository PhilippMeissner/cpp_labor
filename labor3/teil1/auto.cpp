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

    Auto(int iLeistung, char* fab) {
      raiseAnzahl();
      leistung = iLeistung;
      fabrikat = fab;
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
      cout << "Leistung: " << leistung << endl;
      cout << "Fabrikat: " << fabrikat << endl;
    }

    static int getAnzahl() {
      return anzahl;
    }

    void setLeistung(int lei) {
      leistung = lei;
    }

    void setFabrikat(char* fab) {
      fabrikat = fab;
    }
};

// Needed to get rid of "undefined reference" error
int Auto::anzahl = 0;

int main() {
  int n, lei;
  string fab;
  cout << "Anzahl der Autos: ";
  cin >> n;
  Auto *car = new Auto[n];

  // Eingabe
  cout << endl << "========== Eingabe =========" << endl;
  for(int i = 0; i < n; i++) {
    cout << "[Auto " << i+1 << "]" << endl;
    cout << "Wählen Sie die Leistung: ";
    cin >> lei;
    cout << "Wahlen Sie das Fabrikat: ";
    // Ignore trailing newline
    cin.ignore();
    getline(cin, fab);
    car[i].setLeistung(lei);
    car[i].setFabrikat((char *)fab.c_str());
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

  Auto second_car[] = {Auto(10,(char *)"Porsche"), Auto(11,(char *)"Seat"), Auto(12,(char *)"Audi")};
  cout << "============================" << endl;
  cout << "========== Ausgabe =========" << endl;

  for(int i = 0; i < 3; i++) {
    cout << "[Auto(INIT) " << i+1 << "]" << endl;
    second_car[i].print();
    cout << endl;
  }

  cout << "============================" << endl;
  cout << "========= Kontrolle ========" << endl;

  for(int i = 0; i < 3; i++) {
    second_car[i].setFabrikat((char *)"Volkswagen");
  }

  for(int i = 0; i < 3; i++) {
    cout << "[Auto(INIT) " << i+1 << "]" << endl;
    second_car[i].print();
    cout << endl;
  }

  delete[] car;
  return 0;
}
