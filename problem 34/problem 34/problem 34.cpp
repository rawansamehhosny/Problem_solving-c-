//// problem 34.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int Totalsales;
//	cout << "Enter the total sales amount: "; 
//	cin >> Totalsales; 
//
//	if (Totalsales >= 1000000) {
//	cout << "Your commission rate is: " << 0.01* Totalsales << endl;
//	}
//	else if (Totalsales >= 500000) {
//		cout << "Your commission rate is: " << 0.02 * Totalsales << endl;
//	}
//	else if (Totalsales >= 100000) {
//		cout << "Your commission rate is: " << 0.03 * Totalsales << endl;
//	}
//	else if (Totalsales >= 50000) {
//		cout << "Your commission rate is: " << 0.05 * Totalsales << endl;
//	}
//	else {
//		cout << "You failed to make any sales, stupid ." << endl;
//	}
//}
#include <iostream>
using namespace std;

int main()
{
    double totalSales;
    cout << "Enter the total sales amount: ";
    cin >> totalSales;

    double rate = 0;

    if (totalSales >= 1000000) {
        rate = 0.05;   // 5%
    }
    else if (totalSales >= 500000) {
        rate = 0.03;   // 3%
    }
    else if (totalSales >= 100000) {
        rate = 0.02;   // 2%
    }
    else if (totalSales >= 50000) {
        rate = 0.01;   // 1%
    }
    else {
        cout << "oh. u got zero commission ): " << endl;
        return 0;
    }

    double commission = totalSales * rate;

    cout << "--------------------------------" << endl;
    cout << "Commission rate: " << rate * 100 << "%" << endl;
    cout << "Commission amount: " << commission << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
