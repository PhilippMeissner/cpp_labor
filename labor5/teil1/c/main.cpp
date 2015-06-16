#include <iostream>
#include "vector.cpp"
using namespace std;

int main() {
  // Testing int
  cout << "Integer Template Test:" << endl;
  Vector<int> v1;
  cout << "v1: " << v1 << endl;

  Vector<int> v2(8);
  cout << "v2: " << v2 << endl;
  cout << "Minimum von v2: " << v2.min() << endl;

  Vector<int> v3(v2);
  cout << "v3: " << v3 << endl;
  cout << "Anzahl von v3: " << v3.getAnzahl() << endl;

  if ( kleiner(v3[2], v2[5]) ) cout << v3[2] << " ist kleiner als " << v2[5] << endl;

  int arr[5] = { 10, 5, 2, 3, 12 };

  Vector<int> v4;
  cout << "v4: " << v4 << endl;
  v4.setVector( arr, 4 );
  cout << "v4 nach set: " << v4 << endl;
  cout << "Minimum von v4: " << v4.min() << endl;
  cout << "Anzahl von v4: " << v4.getAnzahl() << endl;



  // Testing double
  cout <<  endl << endl << "Double Template Test:" << endl;
    Vector<double> v5;
  cout << "v5: " << v5 << endl;

  Vector<double> v6(8);
  cout << "v6: " << v6 << endl;
  cout << "Minimum von v6: " << v6.min() << endl;

  Vector<double> v7(v6);
  cout << "v7: " << v7 << endl;
  cout << "Anzahl von v7: " << v7.getAnzahl() << endl;

  if ( kleiner(v7[2], v6[5]) ) cout << v7[2] << " ist kleiner als " << v6[5] << endl;

  double darr[5] = { 10.0 / 1.00, 5.0/ 1.00, 2.0 / 1.00, 3.0 / 1.00, 12.0 / 1.00 };

  Vector<double> v8;
  cout << "v8: " << v8 << endl;
  v8.setVector( darr, 4 );
  cout << "v8 nach set: " << v8 << endl;
  cout << "Minimum von v8: " << v8.min() << endl;
  cout << "Anzahl von v8: " << v8.getAnzahl() << endl;

  return 0;
}
