// loop 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	for (int i = 1; i <= 10; i++) {
		for (int j = i; j <= 10; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

}

