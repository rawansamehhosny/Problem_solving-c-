// Unknown.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	bool result;
	result = ((5>6 || !(7<=8)) || ( 8>1 || 4<=3)) || true;
	cout << result;
}
