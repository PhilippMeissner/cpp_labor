using namespace std;
class cPoint {
	public:
		// Constructor
		cPoint();
		cPoint(double dx, double dy);
		double getX();
		double getY();
		void setX(double dx);
		void setY(double dy);
		void move(double dx, double dy);
		string print(bool b);
	private:
		double x, y;
};
