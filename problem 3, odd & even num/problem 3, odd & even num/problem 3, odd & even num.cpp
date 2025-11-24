// problem 3, odd & even num.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum Evenodd { odd= 1, even = 2};

int readnumber() {
    int number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

Evenodd checkevenodd(int number) {
	int result = number % 2;
	if (result == 0) {
		return even;
	}
	else {
		return odd;
	}
}

void printresult(Evenodd numbertype) {
	if (numbertype == even) {
		cout << "The number is even." << endl;
	}
	else if (numbertype == odd) {
		cout << "The number is odd." << endl;
	}
}
int main()
{
    
	printresult (checkevenodd (readnumber()));
	return 0;
}
