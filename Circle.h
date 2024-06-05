#ifndef Circle_h
#define Circle_h

class Circle {
	double x;
	double y;
	double r;
	static int count;

public:

	Circle();
	Circle(double c_x, double c_y, double c_r);
	Circle(const Circle& area);
	~Circle() { count--; }

	void Info();
	double Area();

	const Circle& operator= (const Circle& area);
	const Circle& operator+= (const float s);
	bool operator> (const Circle& other);

	friend istream& operator>> (istream& stream, Circle& B);
	friend ostream& operator<< (ostream& stream, const Circle& B);

	static int GetCount();
};

#endif