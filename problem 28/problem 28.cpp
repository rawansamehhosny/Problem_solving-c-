// problem 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	cout << "________________________________________" << endl;
	cout << "__Sum of odd numbers up to n__" << endl;
	cout << "________________________________________" << endl;
	cout << "Enter the number" << endl;
	int num; cin >> num;
	int counter = 0;
	int sum = 0;

	while (counter <= num) {
		if (counter % 2 != 0) {
			sum = sum + counter;
		}
		counter++;

	}
	cout << "The sum of odd numbers up to " << num << " is " << sum << endl;
	cout << "________________________________________" << endl;
}
//another way to solve the problem using for loop
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "Enter the number: ";
//	int num;
//	cin >> num;
//
//	int sum = 0;
//
//	for (int counter = 1; counter <= num; counter += 2) {
//		// هنا بدأنا من 1 وعملنا ++2 عشان نعد بس الأرقام الفردية
// بيخليها فكل دورة تزود 2 مش 1 وكدا هيضمن انه بيعد الفردي بس عشان 1+2 = 3 وهكذا يعني 
//		sum += counter; // نفس sum = sum + counter
//	}
//
//	cout << "The sum of odd numbers up to " << num << " is " << sum << endl;
//
//	return 0;
//}

