#include <iostream>
#include <limits>
using namespace std;

void validation(int& number) {
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

int main() {
	int number;
	validation(number);

	int counter = 2; 
	int sum = 0;

	while (counter <= number) {
		cout << "The even number is: " << counter << endl;
		sum += counter;
		counter += 2; 
	}

	cout << "The sum of even numbers is: " << sum << endl;
}
