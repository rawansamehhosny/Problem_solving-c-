// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <string>
using namespace std;

//int getNumberOnly() {
//	int value;
//	while (true) {
//		cin >> value;
//
//		if (cin.fail()) {
//			cin.clear(); 
//			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//			cout << "just enter numberssss plzzzz: ";
//		}
//		else {
//			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//			return value; 
//		}
//
//	}
//
//}
int safeStringToInt(const string& str) {
	try {
		return stoi(str);
	}
	catch (const invalid_argument&) {
		cout << "Error: invalid number '" << str << "' detected, returning 0." << endl;
		return 0;
	}
	catch (const out_of_range&) {
		cout << "Error: number '" << str << "' is too large, returning 0." << endl;
		return 0;
	}
}


string name, n1, n2;
int sum;
int main()
{
	cout << "enter any fucking thing : ";
	string ws;  cin >> ws;
	cout << "Enter your name babe: ";
	cin.ignore(1, '\n');
	getline(cin, name);

	cout << "enter N1 plz: ";
	cin >> n1;
	//n1 = getNumberOnly();

	cout << "enter N2 plz: ";
	//n2 = getNumberOnly();
	cin >> n2;

	cout << "==========================================" << endl;
	cout << "the length of your name is:" << name.length() << endl;
	cout << "the char in position 3, 4,5 is: " << name[3] << name[4] << name[5] << endl;
	cout << "enter char in position 3,2 is " << name.substr(3, 2) << endl;
	cout << "the concatination of n1 + n2: " << n1 + n2 << endl;
	sum = safeStringToInt(n1) + safeStringToInt(n2);
	cout << "the sum of n1 + n2 is: " << sum << endl;
	cout << "the * of n1 * n2 is: " << safeStringToInt(n1) * safeStringToInt(n2) << endl;
	cout << "==========================================" << endl;
	return 0;
}
