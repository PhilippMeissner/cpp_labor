#include <iostream> // In- and Output
#include <string>   // String for our structure
using namespace std;

// Prototype declaration
void showSizes();

// Students struct
struct student {
  int id;
  string name, studiengang;
  float note;
  bool bestanden;

  // Standardconstructor
  student(){};
  // Constructor
  student (int i, string na, string sg, float no, bool b) : id(i), name(na), studiengang(sg), note(no), bestanden(b) {}

  // Print the students information
  void showStudent() {
    cout << "ID:\t\t"        << id          << endl;
    cout << "Name:\t\t"      << name        << endl;
    cout << "Studiengang:\t" << studiengang << endl;
    cout << "Note:\t\t"      << note        << endl;
    cout << "Bestanden:\t"   << bestanden   << endl   << endl;
  }
};


int main () {
  // Print information about datatypes
  showSizes();

  // initialized students
  struct student studentarr[3] = {
    student(1, "Friedrich", "BWL", 2.0, true),
    student(2, "Christian", "VWL", 3.4, true),
    student(3, "Carina", "KoDe", 1.0, true)
  };
  // Print first three students from array
  for (int i = 0; i < 3; i++) {
    studentarr[i].showStudent();
  }

  // Manually created students
  //struct student peter(5, "Peter", "TMM", 2.3, true);
  struct student karl, peter;
  karl.id = 4;
  karl.name = "Karl";
  karl.studiengang = "INI";
  karl.note = 4.7;
  karl.bestanden = false;

  peter.id = 5;
  peter.name = "Peter";
  peter.studiengang = "TMM";
  peter.note = 2.3;
  peter.bestanden = true;


  // Print information about students
  karl.showStudent();
  peter.showStudent();

  return 0;
}

// Print information about elementary datatypes
void showSizes () {
  cout << "INT:\t"    << sizeof(int)     << "Bytes" << endl;
  cout << "FLOAT:\t"  << sizeof(float)   << "Bytes" << endl;
  cout << "DOUBLE:\t" << sizeof(double)  << "Bytes" << endl;
  cout << "CHAR:\t"   << sizeof(char)    << "Bytes" << endl;
  cout << "BOOL:\t"   << sizeof(bool)    << "Bytes" << endl;
  cout << "Student:"  << sizeof(student) << "Bytes" << endl   << endl;
}

