#include <iostream>
#include <stdio.h>
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
		cout << "enter r - " << endl;
		cin >> r;
		

	}

	void Info() {
		cout << "Info:" << endl;
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "r: " << r << endl;
	}

	double Area() {

		double area;
		area = r * r * 3.14;

		return area;
	}

	~Circle() {}
};


int main() {

	//конструктор по умолчанию
	Circle FirstCircle;
	FirstCircle.Info();
	double circle1 = FirstCircle.Area();
	cout << circle1 << endl;

	//конструктор с параметрами
	Circle SecondCircle(4, 6);
	SecondCircle.Info();
	double circle2 = SecondCircle.Area();
	cout << circle2 << endl;

	//конструктор копии
	Circle ThirdCircle(SecondCircle);
	ThirdCircle.Info();
	double circle3 = ThirdCircle.Area();
	cout << circle3 << endl;

}
