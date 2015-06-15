#include <iostream>
class Kunde {
  private:
    char* name;
    char* ort;
    int alter;
    int anzahlEinkaeufe;
    double umsatz;
    const int kundenId;
    static int zaehlerKunden;
    static int anzahlKunden;
    static int gesamtAnzahlEinkaeufe;

  public:
    Kunde();
    Kunde(char* name, char* ort, int alter);
    ~Kunde();
    void kopiereKunde(Kunde &k);
    void kaufe(double u);
    int getKundenId();
    void print();
    static int getGesamtAnzahlEinkaeufe() {
      return gesamtAnzahlEinkaeufe;
    }
};
