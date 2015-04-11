#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int addiere(int, int *, int&);

int main () {
  // Initialize srand-seed
  srand(time(NULL));

  // Initialize variables with random-integers. Range 1..100
  int var1 = rand() % 100 + 1, var2 = rand() % 100 + 1, var3 = rand() % 100 + 1;
  int& ref = var3;

  // Print the numbers
  cout << "Variablen nach Initialisierung:" << endl;
  cout << "Variable 1:\t" << var1 << endl;
  cout << "Variable 2:\t" << var2 << endl;
  cout << "Variable 3:\t" << var3 << endl << endl;

  // Addiere ( value var1, address var2, reference of var3)
  cout << "Summe von 'Addiere (return)': " << addiere(var1, &var2, ref) << endl << endl;

  // Print information after addiere
  cout << "Variablen nach 'Addiere':" << endl;
  cout << "Variable 1:\t" << var1 << endl;
  cout << "Variable 2:\t" << var2 << endl;
  cout << "Variable 3:\t" << var3 << endl << endl;

  return 0;
}

int addiere(int par1, int *par2, int& par3) {
  int sum = 0;
  sum = par1 + *par2 + par3;

  // Supersize me!
  par1 *= 2;
  *par2 *= 2;
  par3 *= 2;

  // Print doubled variables
  cout << "Variablen in 'Addiere':" << endl;
  cout << par1 << endl;
  cout << *par2 << endl;
  cout << par3 << endl << endl;

  return sum;
}
