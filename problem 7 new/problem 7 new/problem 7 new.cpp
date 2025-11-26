// problem 7 new.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* read num int
* calculat the half of it float
* return print the resutl is void
*/

#include <iostream>
using namespace std;

//void validation(float &num) {
//	cin >> num;
//	while (num < 0) {
//		cout << "Invalid input. Please enter a non-negative number: ";
//		cin >> num;
//	}
//
//}

void validation(float& num) {
	cin >> num;

	while (cin.fail() || num <=0 ) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input. Please enter a valid number: "; 
		cin >> num;
	}
}

float readnum() {
	float num;
	cout << "Enter a number: ";
	validation (num);
	return num;
}

float calcnum(float num) {
	float half = num / 2.0;
	return half;
}

void printresutl(float half) {
	cout << endl;
	cout << "The half is: " << half << endl;
}

int main()
{
	printresutl(calcnum(readnum()));

}

