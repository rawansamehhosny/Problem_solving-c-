// Input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	string myname;
		int myage;
	string question;
	string answer;
	cout << "Enter ur name plz: " << endl;
	cin >> myname;

	cout << "Enter ur age plz: " << endl;
	cin >> myage;

	cout << "Hello " << myname << ", your age is " << myage << endl;

	if (myage > 18) {
		cout << "ur age is suitable!, welcome!" << endl;
	}
	else {cout << "Not suitable, i'm sorry ): " << endl;}
	cout << "Hope u r having a great day!" << endl;
	cout << "Do u like programming? (yes/no)" << endl;
	cin >> question;
	if (question == "yes") {
		cout << "That's awesome! Keep coding!" << endl;
	}
	else if (question == "no") {
		cout << "Oh no! Maybe give it another try sometime." << endl;
	}
	else {
		cout << "Invalid response. Please answer with 'yes' or 'no'." << endl;
	} 
	cout << "Do u like programming cuz its fun? (yes/no)" << endl;
	cin >> answer;
	if (answer == "yes") {
		cout << "That's awesome! Keep coding!" << endl;
	}
	else if (answer == "no") {
		cout << "Oh no! Maybe give it another try sometime." << endl;
	}
	else {
		cout << "Invalid response. Please answer with 'yes' or 'no'." << endl;
	}

	return 0;

	
}
