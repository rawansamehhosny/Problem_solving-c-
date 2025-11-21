// nested for loop 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			cout << char(i) << char(j) << endl;
		}
	}

}

