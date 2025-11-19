// if condition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter ur mark: ";
	int mark;
	cin >> mark;

	if (mark >= 50) {
		cout << "You passed the exam" << endl;
	}
	else {
		cout << "you failed the exam" << endl;
	}
}

