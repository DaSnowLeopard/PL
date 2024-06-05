#include <iostream>
#include <fstream>
#include "Circle.h"
using namespace std;

int Circle::count = 0;

int main() {

	const int cnt = 5;
	Circle* mas[cnt];

	cout << "how many " << Circle::GetCount() << endl;
	for (int i = 0; i < cnt; i++) {
		mas[i] = new Circle(25 + 1, 36 + i * 2, 3 - i);
		cout << "how many " << Circle::GetCount() << endl;
	}

	for (int i = 0; i < cnt; i++) {
		delete mas[i];
		cout << "how many " << Circle::GetCount() << endl;
	}
	
	cout << "how many " << Circle::GetCount() << endl;
	cout << "static object" << endl << endl;
	cout << "how many " << Circle::GetCount() << endl;

	{
		Circle T1;
		cout << "how many " << Circle::GetCount() << endl;
		{
			Circle T2;
			cout << "how many " << Circle::GetCount() << endl;
			{
				Circle T3;
				cout << "how many " << Circle::GetCount() << endl;
			}
			cout << "how many " << Circle::GetCount() << endl;
		}
		cout << "how many " << Circle::GetCount() << endl;
	}
	cout << "how many " << Circle::GetCount() << endl;

	return 0;

}
	