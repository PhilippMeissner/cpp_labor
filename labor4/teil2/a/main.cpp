#include <iostream>
#include "matrix.h"
using namespace std;

int main () {

  Matrix ma1(3,4);
  for(int i = 0; i < ma1.getCols(); i++){
  	ma1[0][i] = i + 1;
  	ma1[1][i] = i + 11;
  	ma1[2][i] = i + 21;
  }
  
  cout << "Matrix 1:" << endl;
  cout << ma1 << endl;
  Matrix ma2(ma1);
  cout << "Matrix 2:" << endl;
  cout << ma2 << endl << endl;
  cout << "Matrix 1 + 2:" << endl ;
  cout << (ma1+ma2) << endl << endl;
  cout << "Matrix 1 transponiert:" << endl;  
  cout << ma2.transpose() << endl << endl;
  cout << "Matrix 1 * 2:" << endl;
  cout << ma1*ma2.transpose() << endl << endl;
  return 0;
}
