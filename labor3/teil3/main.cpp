#include <iostream>
#include <vector>
#include "intmenge.cpp"
using namespace std;

int main() {
    IntMenge menge;

    cout << "fuege Elemente von 5 bis -2 hinzu" << endl;
    for ( int i=5; i > -3; i-- ) menge.hinzufuegen(i);
    menge.anzeigen();
    cout << endl;
    
    cout << "fuege Elemente von 3 bis 7 hinzu" << endl;
    for ( int i=3; i < 8; i++ ) menge.hinzufuegen(i);
    menge.anzeigen();

    cout << "menge.istMitglied(3) " << menge.istMitglied(3) << endl;
    cout << "menge.istMitglied(-11) " << menge.istMitglied(-11) << endl;
    cout << endl;
    cout << "fuege Element 11 hinzu" << endl;

    menge.hinzufuegen(-11);
    menge.anzeigen();

    cout << "menge.istMitglied(-11) " << menge.istMitglied(-11) << endl;
    cout << endl;
    cout << "fuege Element 2 hinzu; entferne Elemente 99 und -9" << endl;

    menge.hinzufuegen(2);
    menge.entfernen(99);
    menge.entfernen(-9);
    menge.anzeigen();

    cout << endl;

    cout << "fuege Quadratzahlen hinzu" << endl;

    for (int i = 11; i < 16; i++) menge.hinzufuegen(i*i);
    menge.anzeigen();

    cout << endl;
    cout << "Anzahl = " << menge.size() << " Minimum = " << menge.getMin() << endl;
    cout << "menge.getMin() = " << menge.getMin() << endl;
    cout << "menge.getMax() = " << menge.getMax() << endl;
    cout << endl;
    
    
    cout << "nacheinander Elemente entfernen..." << endl;
    int k = menge.getMin();
    cout << "k: " << k << endl;
    while ( menge.size() > 0 ) {
        int vorher = menge.size();
        menge.entfernen(k++);

        if ( vorher != menge.size() ) {
            menge.anzeigen();
            cout << endl;
        }
    }
    menge.loeschen();

    return 0;
}
