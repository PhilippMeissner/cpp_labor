#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct complex {
  int real;
  int imag;
};

// Prototypes
float square(float x);
complex square(complex c);

int main () {
  // initialize random-seed
  srand(time(NULL));
  complex c;
  c.real = 5;
  c.imag = 7;
  c = square(c);

  cout << "Square of 2.5: " << square(2.5) << endl;
  cout << "Square of (5, 7):" << endl;
  cout << "Real:\t\t" << c.real << endl;
  cout << "Imaginär:\t" << c.imag << endl;

  return 0;
}


// Returns x²
float square(float x) {
  return x*x;
}

// Returns the ² of a complex number
complex square(complex c) {
  complex res;
  res.real = (c.real * c.real) - (c.imag * c.imag);
  res.imag = (2 * c.real * c.imag);

  return res;
}
