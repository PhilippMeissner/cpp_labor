# include "vector.cpp"
int main() {
  Vector v1;
  cout << "v1: " << v1 << endl;

  Vector v2(8);
  cout << "v2: " << v2 << endl;
  cout << "Minimum von v2: " << v2.min() << endl;

  Vector v3(v2);
  cout << "v3: " << v3 << endl;
  cout << "Anzahl von v3: " << v3.getAnzahl() << endl;

  if ( kleiner(v3[2], v2[5]) ) cout << v3[2] << " ist kleiner als " << v2[5] << endl;

  int arr[5] = { 10, 5, 2, 3, 12 };
  Vector v4;
  cout << "v4: " << v4 << endl;
  v4.setVector( arr, 4 );
  cout << "v4 nach set: " << v4 << endl;
  cout << "Minimum von v4: " << v4.min() << endl;
  cout << "Anzahl von v4: " << v4.getAnzahl() << endl;

  return 0;
}
