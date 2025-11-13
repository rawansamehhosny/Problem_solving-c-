// Enum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
using namespace std;


#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

enum wether { sunny, rainy, cloudy, snowy };

void printwether(wether w)
{
    if (w == sunny)
        cout << GREEN << "It would be great to go outside, right?" << RESET << endl;
    else if (w == rainy)
        cout << CYAN << "Take your umbrella with you!" << RESET << endl;
    else if (w == cloudy)
        cout << YELLOW << "It might rain later, be careful!" << RESET << endl;
    else if (w == snowy)
        cout << CYAN << "Wear warm clothes!" << RESET << endl;
}

int main()
{
    int ws;
    cout << CYAN << "============================" << RESET << endl;
    cout << CYAN << "Weather forecast for today:" << RESET << endl;
    cout << CYAN << "============================" << RESET << endl;
    cout << "What is the weather like today? (0=sunny, 1=rainy, 2=cloudy, 3=snowy): ";

    while (true) {
        cin >> ws;

        if (cin.fail()) {
            cin.clear(); // clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << RED << "Invalid input! Why r u enter a char?, bro enter a number between 0 and 3 "<< RESET << endl;
        }
        else if (ws < 0 || ws > 3) {
            cout << YELLOW << "Ah stupid!, we giving u numbers between 0 and 3, what the hell r u doing by entering: " << ws << " ?" << RESET << endl;
        }
        else {
            break; // valid input
        }
        cout << "Try again: ";
    }

    printwether(static_cast<wether>(ws));
    cout << GREEN << "Have a nice day!" << RESET << endl;
    cout << CYAN << "============================" << RESET << endl;
    return 0;
}

// another way to do it:
//#include <iostream>
//#include <string>
//#include <algorithm> // للتحويل للحروف الصغيرة
//using namespace std;
//
//// تعريف enum للطقس
//enum Weather { Sunny, Rainy, Cloudy, Snowy };
//
//// دالة تطبع رسالة حسب حالة الطقس
//void printWeather(Weather w) {
//    switch (w) {
//    case Sunny:  cout << "It would be great to go outside, right?" << endl; break;
//    case Rainy:  cout << "Take your umbrella with you!" << endl; break;
//    case Cloudy: cout << "It might rain later, be careful!" << endl; break;
//    case Snowy:  cout << "Wear warm clothes!" << endl; break;
//    }
//}
//
//// دالة تحويل النصوص لطقس
//bool stringToWeather(const string& input, Weather& w) {
//    string s = input;
//    transform(s.begin(), s.end(), s.begin(), ::tolower); // تحويل كل الحروف للصغيرة
//
//    if (s == "sunny") { w = Sunny;  return true; }
//    if (s == "rainy") { w = Rainy;  return true; }
//    if (s == "cloudy") { w = Cloudy; return true; }
//    if (s == "snowy") { w = Snowy;  return true; }
//
//    return false; // إدخال غير صحيح
//}
//
//int main() {
//    string userInput;
//    Weather today;
//
//    cout << "Weather forecast for today:" << endl;
//    cout << "Enter the weather (0=sunny, 1=rainy, 2=cloudy, 3=snowy or type the name): ";
//
//    while (true) {
//        cin >> userInput;
//
//        // لو المستخدم كتب رقم
//        if (isdigit(userInput[0]) && userInput.size() == 1) {
//            int choice = userInput[0] - '0';
//            if (choice >= 0 && choice <= 3) {
//                today = static_cast<Weather>(choice);
//                break;
//            }
//        }
//
//        // لو المستخدم كتب الاسم
//        if (stringToWeather(userInput, today)) {
//            break;
//        }
//
//        cout << "Invalid input! Try again: ";
//    }
//
//    printWeather(today);
//    return 0;
//}
