// problem 27, while loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void validation (int &number)
{
    while (true) {
		cout << "Please enter a positive number: ";
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
    int n; validation(n);
    int counter = n;
    while (counter > 1)
    {
        counter--;
		cout << counter << endl;
    }
}

