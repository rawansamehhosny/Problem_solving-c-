// tries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ 
	int Age = 20;
	string Name = "\"Rawan sameh\"\n"; 
	float Weight = 50.5; 
	bool Married = false;
	char Gender = 'F';
	float Salarybermonth = 20000;
	float Salaryperyear = Salarybermonth * 12;

	cout << "******************************************************\n";
	cout << "My Name Is : " << Name;
	cout << "My Age Is : " << Age << endl;
	cout << "My Weight Is : " << Weight << endl;
	cout << "Am I Married ? : " << Married << endl;
	cout << "My Gender is :" << Gender << endl; 
	cout << "My Salary Per Month Is : " << Salarybermonth << endl;
	cout << "My Salary Per Year Is : " << Salaryperyear << endl;
	cout << "******************************************************\n";
	return 0;
}

