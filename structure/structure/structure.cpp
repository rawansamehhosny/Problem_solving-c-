// structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct address {
    string city;
    string state;
    int zip;
};

struct person {
    string name;
    int age;
    float salary;
    address Addres;
};

int main()
{
    person p1;
    cout << "Enter name: ";
    cin >> p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;
    cout << "Enter city: ";
    cin >> p1.Addres.city;
    cout << "Enter state: ";
    cin >> p1.Addres.state;
    cout << "Enter zip: ";
    cin >> p1.Addres.zip;

    cout << "===============================\n" << endl;
    cout << "You entered the following information:" << endl;
    cout << "===============================" << endl;
    cout << "Name: " << p1.name << " \n"
         << "Age: " << p1.age << " \n"
         << "Ur Salary is: " << p1.salary << " \n"
         << "Ur city is: " << p1.Addres.city << " \n"
         << "another city addres?: " << p1.Addres.state << " \n"
         << "zip code: " << p1.Addres.zip << endl;
    cout << "===============================\n" << endl;
    return 0;
}
