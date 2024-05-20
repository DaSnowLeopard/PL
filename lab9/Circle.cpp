#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;
#include "Circle.h"

Circle::Circle() {
	srand(time(0));

	x = 1 + rand() % (10 - 1 + 1);
	y = 1 + rand() % (10 - 1 + 1);
	r = 1 + rand() % (10 - 1 + 1);
	count++;
}

Circle::Circle(double c_x, double c_y, double c_r) {
	x = c_x;
	y = c_y;
	r = c_r;
	count++;
}

Circle::Circle(const Circle& area) {
	x = area.x;
	y = area.y;
	r = area.r;
	count++;
}

void Circle::Info() {
	cout << "Info:" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "R: " << r << endl;
}

double Circle::Area() {
	double area;
	area = r * r * 3.14;

	return area;
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

istream& operator>> (istream& stream, Circle& B) {
	stream >> B.x >> B.y >> B.r;
	return stream;
}

ostream& operator<< (ostream& stream, const Circle& B) {
	stream << B.x << " " << B.y << " " << B.r << endl;
	return stream;
}

int Circle::GetCount() {
	return count;
}