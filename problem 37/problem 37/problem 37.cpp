// problem 37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void count99(int n )
{
 
    for (int i  = n ; i <= 99; i++)
        cout << i << endl;
}

int main()
{
    int start;
	cout << "Enter a number less than 99: ";
    cin >> start;

    cout << "counting to 99 from " << start << ":" << endl;
    count99(start);
    return 0;
}

