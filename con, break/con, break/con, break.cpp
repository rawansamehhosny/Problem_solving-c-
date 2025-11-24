// con, break.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void validation(int& n) {

	while (true) {

		cin >> n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid number";
			continue;
		}
		else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
}
void Readnumber(int& n) {
	cout << "Enter a number: ";
	validation(n);
}

int check() 
{
	int sum = 0;
	int n;
	for (int i = 0; i < 5; i++) {
		Readnumber(n);

		if (n > 50) {
			cout << "The number must be smaller than 50. Try again." << endl;
			i--;
			continue;
		}
		sum += n;
	}
	cout << "The sum is: " << sum << endl;
	return sum;
}
int main()
{
	int number;
	check();

}
