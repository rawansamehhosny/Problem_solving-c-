
#include <iostream>
#include <string>
using namespace std;

struct structinfo
{
	string name;
	int age;
	string phone;
	string address;
};
void readinfo(structinfo& info) {
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

void printinfo(const structinfo& info) {
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
	structinfo person[SIZE];
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

