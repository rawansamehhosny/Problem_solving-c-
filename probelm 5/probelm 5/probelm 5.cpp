// problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* 1- struct stinfo = age , licence
*
* 2- stinfo readinfo() : read age and licence from user
*
* 2- (bool) checkeligibility (stinfo)  : return (age >= 18 && licence == true)
*
* 3- void printelegibility (stinfo)  : print "eligible" if checkeligibilty == 1
* else print "not eligible"

*/

#include <iostream>
using namespace std;

void validateage(int &age) {
    cin >> age;
    while (age <= 0 || age > 45) {
		cout << "Invalid age. Please enter a valid age: ";
        cin >> age;
    }
}

void validate10(bool &x) {
    int temp;
    cin >> temp;
    while (temp != 0 && temp != 1) {
		cout << "Invalid input. Please enter 1 for yes or 0 for no: ";
		cin >> temp;
       
    }
     x= temp ;
}
struct stinfo {
    int age;
    bool licence;
    bool Recommendation;
};

stinfo readinfo() {
    stinfo info;
	cout << "Do you have a recommendation letter? (1 for yes, 0 for no): ";
    validate10(info.Recommendation);
    if (info.Recommendation) {
        info.age = 0;
		info.licence = false;
        return info;
    }

    cout << "Enter your age: ";
    validateage ( info.age);
    cout << "Do you have a driving licence? (1 for yes, 0 for no): ";
    validate10 ( info.licence);
    return info;
}

bool checkeligibilty(stinfo info) {

    if (info.Recommendation)
        return true;
    else {

        return (info.age >= 18 && info.licence == true);
    }
}

void printelegibility(stinfo info) {
    if (checkeligibilty(info)) {
        cout << "you're Eligible" << endl;
    }
    else {
        cout << "you're Not eligible" << endl;
    }
}

using namespace std;
int main()
{

    printelegibility(readinfo());
    return 0;

}


