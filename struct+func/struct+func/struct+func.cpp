// struct+func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct strinfo
{
	int id;
	string name;
	string phone;
	string address;
};

void Readinfo(strinfo &info)
{
	cout << "Enter ID: ";
	cin >> info.id;
	cout << "Enter Name: ";
	getline(cin, info.name);
	cout << "Enter Phone: ";
	cin >> info.phone;
	cout << "Enter Address: ";
	cin >> info.address;
}

void Printinfo(const strinfo& info) {

	cout << "======================" << endl;
	cout << "---- Person Info ----" << endl;
	cout << "ID: " << info.id << endl;
	cout << "Name: " << info.name << endl;
	cout << "Phone: " << info.phone << endl;
	cout << "Address: " << info.address << endl;
	cout << "======================" << endl;
}

int main()
{

	strinfo person1;
	Readinfo(person1);
	Printinfo(person1);

	strinfo person2;
	Readinfo(person2);
	Printinfo(person2);


}

