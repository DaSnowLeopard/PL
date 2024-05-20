#include <iostream>
#include <fstream>
using namespace std;
#include "C:\Users\Home\Downloads\Telegram Desktop\Circle.h"


int Circle::count = 0;

int main() {
	Circle GlobalTest;
	Circle GlobalTest2(8, 4, 12);

	ofstream fib;
	fstream fin;

	fin.open("1.txt");
	fib.open("2.txt");

	if (!fin) {
		cout << "no excisting file" << endl;
	}
	else {
		while (fin >> GlobalTest) {
			cout << "successful input from file" << endl;
			cout << GlobalTest << endl;
		}
	}

	if (!fib) {
		cout << "no excisting file" << endl;
	}
	else {
		fib << GlobalTest2;
		cout << "successful input from file" << endl;
	}

	fin.close();
	fib.close();
}
	