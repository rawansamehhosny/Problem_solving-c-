// problem 28, while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void validation(int& number) {
	while (true) {
		cout << "Please enter a positive number: ";
		cin >> number;
		if (cin.fail()) { cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. "; 
		continue; }

		if (number <= 0) {
			cout << "The number must be positive. ";
		continue;
		} cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break; } 
}

int main()
{
	int n;
	validation(n);

	int counter = 0;
	int sum = 0;
	while (counter < n) {
		counter++;

		if (counter  % 2 != 0) {
			sum += counter;
			cout << "Adding " << counter << ", sum is now " << sum << endl;
	}
}
	cout << "The sum of odd integers from 1 to " << n << " is " << sum << endl;
}

