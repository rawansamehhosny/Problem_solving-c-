// problem 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* 1- struct stname : string fisrt name, last name
* 2- stname : read form user () return info
* 3- void getname (stname info) 
* 3- string print full name 
*/
#include <iostream>
using namespace std;

struct stinfo {
	string firstname;
	string lastname;
};

stinfo readinfo() {
	stinfo info;
	cout << "Enter first name: ";
	cin >> info.firstname;
	cout << "Enter last name: ";
	cin >> info.lastname;
	return info;
}
string getname(stinfo info) {
	string fullname;
	fullname = info.firstname + " " + info.lastname;
	return fullname;
}

void printfullname(string fullname) {
	cout << endl;
	cout << "====================" << endl;
	cout << "Full name: " << fullname << endl;
	cout << "====================" << endl;
}

int main()
{

	printfullname(getname(readinfo()));

}

