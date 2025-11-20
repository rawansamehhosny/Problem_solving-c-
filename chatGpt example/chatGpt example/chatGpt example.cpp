// chatGpt example.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <limits>
using namespace std;

string name;
int TheNumbersOfDegrees = 0;

void validate(float &degree) {
    while (true) {
        if (!(cin >> degree)) {
            cout << "Invalid input. Please enter a numeric degree between 0 and 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // If there are trailing non-digit characters on the same line, they will be removed below.
        if (degree < 0.0f || degree > 100.0f) {
            cout << "Invalid degree. Please enter a degree between 0 and 100: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
}

void getdegree(float degree[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Enter your degree " << (i + 1) << ": ";
        validate(degree[i]);
    }
}

float average(float degree[], int count) {
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += degree[i];
    }
    return sum / count;
}

void printavg(float avg) {
    if (avg >= 90) {
        cout << "oh, dear " << name << " Your average is: " << avg << " , Grade: A" << endl;
    }
    else if (avg >= 80) {
        cout << "oh, dear " << name << " Your average is: " << avg << " , Grade: B" << endl;
    }
    else if (avg >= 70) {
        cout << "oh, dear " << name << " Your average is: " << avg << " , Grade: C" << endl;
    }
    else if (avg >= 60) {
        cout << "oh, dear " << name << " Your average is: " << avg << " , Grade: D" << endl;
    }
    else {
        cout << "oh, dear " << name << " Your average is: " << avg << " , Grade: F" << endl;
    }
}

int main()
{
    cout << "Welcome to the Degree Average Calculator!" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "please enter your name: ";
    getline(cin, name);
    cout << "Enter the number of degrees to average: ";
    cin >> TheNumbersOfDegrees;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (TheNumbersOfDegrees <= 0) {
        cout << "Invalid number of degrees." << endl;
        return 1;
    }

    float* degree = new float[TheNumbersOfDegrees];
    getdegree(degree, TheNumbersOfDegrees);
    float avg = average(degree, TheNumbersOfDegrees);
    printavg(avg);
    delete[] degree;
    return 0;
}

