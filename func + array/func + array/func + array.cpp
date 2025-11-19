// func + array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <limits>
	
void readmark(float marks[], int size) {
	for (int i = 0; i < size; i++) {
		while(true) {
			cout << "Enter mark number " << i + 1 << " : ";
			cin >> marks[i];
			if (!cin.fail()) break;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Enter a valid input ya hamar!" << endl;
		}
	}
}

float avgmark(float marks[], int size) {
	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}
	return sum / size;
}

int main() {

	const int size = 4;
	float marks[size];

	readmark(marks, size);
	float result = avgmark (marks, size);
	cout << "The average marks is: " << result << endl;
	return 0;
}

//float marks[100];
//int size;
//
//cout << "Enter the number of students: ";
//cin >> size;
//
//readmark(marks, size);
//cout << "The average marks is: " << avgmark(marks, size) << endl;
//
//return 0;