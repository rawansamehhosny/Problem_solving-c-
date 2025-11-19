// problem 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your age: ";
	int age; cin >> age;

	if (age >= 18 && age <= 45) {
		cout << "==============================" << endl;
		cout << "You are eligible to work." << endl;
	}
	else {
		cout << "==============================" << endl;
		cout << "You are not eligible to work." << endl;
	}
}

