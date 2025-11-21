// while loop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a number: ";
	int number; cin >> number;
	_Atomic_counter_t counter = 0;
	while (counter < number) {
		counter++;
		cout << counter << endl;
	}

}

