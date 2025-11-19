// projsct 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

struct stractinfo
{
	string name;
	int age;
	string phone;
	string address;
};
void readinfo(stractinfo& info) {
	cout << "Enter name: ";
	getline(cin, info.name);
	cout << "Enter age: ";
	cin >> info.age;
	cin.ignore();
	cout << "Enter phone: ";
	getline(cin, info.phone);
	cout << "Enter address: ";
	getline(cin, info.address);
}

void printinfo(const stractinfo& info) {
	cout << "------------------" << endl;
	cout << "Name: " << info.name << endl;
	cout << "Age: " << info.age << endl;
	cout << "Phone: " << info.phone << endl;
	cout << "Address: " << info.address << endl;
	cout << "------------------" << endl;
}

int main()
{
	const int SIZE = 2;
	stractinfo person[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cout << "------------------" << endl;
		cout << "Enter information for person " << (i + 1) << ":" << endl;
		readinfo(person[i]);
	}
	for (int i = 0; i < SIZE; i++) {
		cout << endl;
		cout << "Information for person " << (i + 1) << ":" << endl;
		printinfo(person[i]);
	}

}

