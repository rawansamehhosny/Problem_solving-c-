// func problem 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int radius;
double circleArea(double radius) {
	return 3.14 * pow(radius, 2);
 }

int main()
{
	cout << "Enter radius of circle: "; 
	cin >> radius;
	cout << "Area of circle is: " << circleArea(radius) << endl;
}

