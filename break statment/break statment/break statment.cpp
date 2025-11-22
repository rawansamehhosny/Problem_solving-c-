// break statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the size of array: ";
	int size; cin >> size;

	int arr[100];
	cout << "Enter the elements of array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "The elements are: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "Enter the element to search: ";
	int key; cin >> key;

	bool found = false;
	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			cout << "Element found at index " << i << endl;
			found = true;
			break;
		}
	}
	cout << "----------------------------------" << endl;
	if (!found) {
		cout << "Element not found in the array" << endl;
	}
}



