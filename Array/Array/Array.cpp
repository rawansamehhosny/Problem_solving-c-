// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float marks[3];

	cout << "the first mark: ";
	cin >> marks[0];
	cout << "the secound mark: ";
	cin >> marks[1];
	cout << "the third mark: ";
	cin >> marks[2];

	cout << "The avrage of ur marks is: " << (marks[0] + marks[1] + marks[2]) / 3 << " as u see!" << endl;


