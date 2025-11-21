// problem 27, while loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int n; cin >> n;
    int counter = n;
    while (counter > 1)
    {
        counter--;
		cout << counter << endl;
    }
}

