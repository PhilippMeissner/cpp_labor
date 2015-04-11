#include <iostream> // In- and Output
#include <string>   // String for our structure
using namespace std;

// Aufgabe a)
void showSizes();


struct student {
  int id;
  string name, studiengang;
  float note;
  bool bestanden;

  //student (int i, string na, string sg, float no, bool b) : id(i), name(na), studiengang(sg), note(no), bestanden(b) {};


  // Print the students information
  void showStudent() {
    cout << "ID:\t\t" << id << endl;
    cout << "Name:\t\t" << name << endl;
    cout << "Studiengang:\t" << studiengang << endl;
    cout << "Note:\t\t" << note << endl;
    cout << "Bestanden:\t" << bestanden << endl;
  }

};

int main () {
  //struct student studentarr[2];


  showSizes();

  return 0;
}

void showSizes () {
  cout << "INT:\t" << sizeof(int) << "Bytes" << endl;
  cout << "FLOAT:\t" << sizeof(float) << "Bytes" << endl;
  cout << "DOUBLE:\t" << sizeof(double) << "Bytes" << endl;
  cout << "CHAR:\t" << sizeof(char) << "Bytes" << endl;
  cout << "BOOL:\t" << sizeof(bool) << "Bytes" << endl;
  cout << "Student:" << sizeof(student) << "Bytes" << endl;
}

