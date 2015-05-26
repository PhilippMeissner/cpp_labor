#include <iostream>

using namespace std;

class Auto {
	private:
		int	 leistung;
		char* fabrikat;
	public:
		static int anzahl;
		Auto() {
			anzahl++;
			cout << "Anzahl: " << anzahl << endl;
		}
		
		Auto(int leistung, char* fabrikat) {
			Auto();
			this->leistung = leistung;
			this->fabrikat = fabrikat;
		}
		
};

int Auto::anzahl = 0;

int main () {
	for (int i = 0; i < 4; i++) {
		Auto();
	}
  cout << "Test yo" << endl;
  
  return 0;
}
