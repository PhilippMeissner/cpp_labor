#include <iostream>
#include "punkt.h"
#include "vector.cpp"
using namespace std;

int main() {
  // Testing Punkt
  cout <<  endl << endl << "Punkt Template Test:" << endl;
  Vector<Punkt> v5;
  cout << "v5: " << v5 << endl;

  Vector<Punkt> v6(8);
  cout << "v6: " << v6 << endl;
  cout << "Minimum von v6: " << v6.min() << endl;

  Vector<Punkt> v7(v6);
  cout << "v7: " << v7 << endl;
  cout << "Anzahl von v7: " << v7.getAnzahl() << endl;

  if ( kleiner(v7[2], v6[5]) ) cout << v7[2] << " ist kleiner als " << v6[5] << endl;

  Punkt darr[5] = { 10.0 / 1.00, 5.0/ 1.00, 2.0 / 1.00, 3.0 / 1.00, 12.0 / 1.00 };

  Vector<Punkt> v8;
  cout << "v8: " << v8 << endl;
  v8.setVector( darr, 4 );
  cout << "v8 nach set: " << v8 << endl;
  cout << "Minimum von v8: " << v8.min() << endl;
  cout << "Anzahl von v8: " << v8.getAnzahl() << endl;

  return 0;
}
