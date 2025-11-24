// name + cin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

string readname() {
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	return name;
}

void printname(string name) {
	cout << "Hello, " << name << "!" << endl;
}

int main()
{
	printname(readname());
}

