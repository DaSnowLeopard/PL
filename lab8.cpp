
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
		r = 1 + rand() % (10 - 1 + 1);

	}

	Circle(double c_x, double c_y, double c_r) {
		x = c_x;
		y = c_y;
		r = c_r;
	}

	Circle(const Circle& area) {
		x = area.x;
		y = area.y;
		r = area.r;
	}

	void In() {

		cout << "enter x - " << endl;
		cin >> x;
		cout << "enter y - " << endl;
		cin >> y;
		cout << "enter R - " << endl;
		cin >> r;

	}

	void Info() {
		cout << "Info:" << endl;
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "R: " << r << endl;
	}

	double Area() {
		double area;
		area = r * r * 3.14;

		return area;
	}

	const Circle& operator= (const Circle& area);
	const Circle& operator+= (const float s);
	bool operator> (const Circle& other);

	~Circle() {}
};

const Circle& Circle::operator= (const Circle& area) {
	if (this == &area) {
		return *this;
	}
	x = area.x;
	y = area.y;
	r = area.r;
	return *this;
}

const Circle& Circle::operator+= (const float s) {
	r += s;
	return *this;
}

bool Circle::operator> (const Circle& other) {
	if (r > other.r) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	//конструктор по умолчанию
	Circle FirstCircle;
	//FirstCircle.Info();
	double circle1 = FirstCircle.Area();
	cout << circle1 << endl;

	//конструктор с параметрами
	Circle SecondCircle(4, 6, 10);
	//SecondCircle.Info();
	double circle2 = SecondCircle.Area();
	cout << circle2 << endl;

	//конструктор копии
	Circle ThirdCircle(SecondCircle);
	//ThirdCircle.Info();
	double circle3 = ThirdCircle.Area();
	cout << circle3 << endl;

	Circle test1(1, 2, 6), test2(5, 9, 20);
	cout << "test1 circle: \n";
	test1.Info();
	cout << "test1 circle: \n";
	test2.Info();
	test1 = test2;
	test1 += 9;
	cout << "test1 circle(R+9): \n";
	test1.Info();
	if (test1 > test2) {
		cout << "R1 greater than R2" << endl;
	}
	else {
		cout << "R1 less than R2" << endl;
	}
}
