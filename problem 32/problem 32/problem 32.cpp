// problem 32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void validation(int& number) {
	while (true) {
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. ";
			continue;
		}
		if (number <= 0) {
			cout << "The number must be positive. ";
			continue;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
	}
}

int main()
{
	int n;
	int m;

	cout << "Enter the number u want: ";
	validation(n);
	switch (n == 0) {
	case true:
		cout << "ah.. ofc the result is: 0" << endl;
		return 0;
		break;
	}

	cout << "Enter the power u want: ";
	validation(m);

	int p = 1;
	int counter = 0;
	while (counter < m) {
		p = p * n;
		counter = counter + 1;
	}
	cout << "The result is: " << p << endl;
}

