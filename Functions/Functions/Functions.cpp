// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string st1 = "41.5388";
    int int1 = stoi(st1);
    double do1 = stod(st1);
    float fl1 = stof(st1);
    cout << int1 << " , " << do1 << " , " << fl1 << endl;
    
    int in0 = 20;
    string st0 = to_string(in0);
    cout << st0 <<endl;

    double do2 = 33.5;
    string st2 = to_string(do2);
    cout << st2 << endl;

    float fl2 = 55.432;
    string st3 = to_string(fl2);
    cout << st3 << endl;
    
    cout << st2 + st3;
}
