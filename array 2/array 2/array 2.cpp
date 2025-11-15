#include <iostream>
#include <limits>
using namespace std;

int main()
{
    const int size = 3;
    float marks[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter marks " << i + 1 << ": ";
        while (!(cin >> marks[i])) {
            cout << "invalid input, we told u to enter a number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
     
    }

    cout << "The average of your marks is: " << sum / size << endl;
}
