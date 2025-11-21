// nested if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   
	for (int i = 1; i <= 10; i++) {
		cout << "======================\n";
		cout << "i" << "=" << i << "\n";
		for (int j = 1; j <= 10; j++) {
			
			cout << i << "*" << j << "=" << i * j << "\n";
		}
	
	}


}
