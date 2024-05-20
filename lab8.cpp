
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Circle {
	double x;
	double y;
	double r;
public:
	Circle()

	{
		srand(time(0));

		x = 1 + rand() % (10 - 1 + 1);
		y = 1 + rand() % (10 - 1 + 1);
	}

	Circle(double c_x, double c_y) {
		x = c_x;
		y = c_y;
	}

	Circle(const Circle& r) {
		x = r.x;
		y = r.y;
	}

	void In() {

		cout << "enter x - " << endl;
		cin >> x;
		cout << "enter y - " << endl;
		cin >> y;

	}

	void Info() {
		cout << "Info:" << endl;
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}

	double Radius() {

		r = r * r * 3.14;

		return r;
	}

	const Circle& operator= (const Circle& r);
	const Circle& operator+= (const float s);
	const Circle& operator> (const Circle& s);

	~Circle() {}
};

const Circle& Circle::operator= (const Circle& r) {
	if (this == &r) {
		return *this;
	}
	x = r.x;
	y = r.y;
	return *this;
}

const Circle& Circle::operator+= (const float s) {
	x += s;
	y += s;
	return *this;
}

const Circle& Circle::operator> (const Circle& r) {
	if (this > &r) {
		return *this;
	}
	x = r.x;
	y = r.y;
	return *this;
}

int main() {

	//конструктор по умолчанию
	Circle FirstCircle;
	//FirstCircle.Info();
	double circle1 = FirstCircle.Radius();
	cout << circle1 << endl;

	//конструктор с параметрами
	Circle SecondCircle(4, 6);
	//SecondCircle.Info();
	double circle2 = SecondCircle.Radius();
	cout << circle2 << endl;

	//конструктор копии
	Circle ThirdCircle(SecondCircle);
	//ThirdCircle.Info();
	double circle3 = ThirdCircle.Radius();
	cout << circle3 << endl;

	Circle test1(1, 2), test2(5, 9);
	test1.Info();
	test2.Info();
	test1 = test2;
	test1 += 9;
	test1.Info();
	//?
}