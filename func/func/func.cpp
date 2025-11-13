// func.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int temp;
int n1, n2;
void shiftnumber(int &n1, int &n2) {
	temp = n1;
	n1 = n2;
	n2 = temp;
}
int main()
{
	cout << "enter number 1: ";
	cin >> n1 >> n2;
	shiftnumber(n1, n2);
	cout << "after shifting the numbers are: " << n1 << " " << n2 << endl;
}

