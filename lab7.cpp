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
	}

	Circle(double c_x, double c_y) {
		x = c_x;
		y = c_y;
		//r = c_r;
	}
	
	Circle(const Circle& r) {
		x = r.x;
		y = r.y;
	}



	/*float Area() { return (r * r * 3.14); };
	void Info();
	void In();*/

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

		//double r;
		r = r * r * 3.14;

		return r;
	}

	~Circle() {}
};


int main() {

	//конструктор по умолчанию
	Circle FirstCircle;
	FirstCircle.Info();
	double circle1 = FirstCircle.Radius();
	cout << circle1 << endl;

	//конструктор с параметрами
	Circle SecondCircle(4, 6);
	SecondCircle.Info();
	double circle2 = SecondCircle.Radius();
	cout << circle2 << endl;

	//конструктор копии
	Circle ThirdCircle(SecondCircle);
	ThirdCircle.Info();
	double circle3 = ThirdCircle.Radius();
	cout << circle3 << endl;

}