#include <iostream>
#include <cmath>
using namespace std;

// Funktionsprototyp
double trapezFlaeche(double a = -1.0, double b = -1.0, double winkel = 0.0, double c = -1.0);

int main () {
  cout << "[1] " << trapezFlaeche(2.0, 4.0, 45.0, 3.5) << endl;
  cout << "[2] " << trapezFlaeche(2.0, 4.0, 45.0) << endl;
  cout << "[3] " << trapezFlaeche(2.0, 4.0) << endl;
  cout << "[4] " << trapezFlaeche(2.0) << endl;
  return 0;
}

double trapezFlaeche(double a, double b, double winkel, double c) {
  // Quadrat
  if(b == -1.0 && c == -1.0 && winkel == 0.0){
    cout << "Quadrat" << endl;
    return a*a;
  }
  // Rechteck
  if(c == -1.0 && winkel == 0.0){
    cout << "Rechteck" << endl;
    return a*b;
  }
  // Para
  if(c == -1.0) {
    cout << "Para" << endl;
    double h = b * sin(winkel);
    return a*h;
  }
  // Trapez
  if(!(a == -1.0 && b == -1.0 && winkel == 0.0 && c == -1.0)){
    cout << "Trapez" << endl;
    double h = b * sin(winkel);
    return (0.5 * (a + c) * h);
  }
}
