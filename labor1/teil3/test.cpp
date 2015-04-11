#include <iostream>
using namespace std;

int main ( int argc, char* argv[] ) {
  int x = 5;
  int& y = x;

  y = 9;
  int a[100];
  int &b = a[55];

  b = y;

  int *p = &y;
  int& z = *p;

  z = 33;
  // For validation
  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  cout << "Z: " << z << endl;
  cout << "B: " << b << endl;
}
