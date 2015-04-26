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
float square(complex c);

int main () {
  // initialize random-seed
  srand(time(NULL));
  complex c;
  c.real = 5;
  c.imag = 7;

  cout << "Square of 2.5: " << square(2.5) << endl;
  cout << "Square of (5, 7): " << square(c) << endl;

  return 0;
}


// Returns x²
float square(float x) {
  return x*x;
}

// Returns the ² of a complex number
float square(complex c) {
  // TODO: Check if calculation is correct
  return (c.real + c.imag) * (c.real + c.imag);
}
