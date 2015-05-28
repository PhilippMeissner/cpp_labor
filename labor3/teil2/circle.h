class cCircle {
	public:
		cCircle();
		cCircle(cPoint c, double r);
		string print(bool b);
		void move(double dx, double dy);
	private:
		cPoint center;
		double radius;
};
