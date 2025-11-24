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

struct stinfo {
	int age;
	bool licence;
};

stinfo readinfo() {
	stinfo info;
	cout << "Enter your age: ";
	cin >> info.age;
	cout << "Do you have a driving licence? (1 for yes, 0 for no): ";
	cin >> info.licence;
	return info;
}

bool checkeligibilty(stinfo info) {
	return (info.age >= 18 && info.licence == true);
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


/*
*               [ يبدأ البرنامج ]
                       |
                       v
                +--------------+
                | readinfo()   |
                | يسأل سن ورخص |
                +--------------+
                       |
                       | يرجّع stinfo info
                       v
          +---------------------------+
          | checkeligibility(info)    |
          |  هل السن >= 18 ومعاه رخصة؟|
          +---------------------------+
                       |
                       | يرجّع true / false
                       v
            +-----------------------+
            | printelegibility(info)|
            | يطبع النتيجة          |
            +-----------------------+
                       |
                       v
                  [ النهاية ]


الفكرة الكبيرة اللي دماغك كانت بتدوّخ منها

المخ عنده مشكلة مع فكرة إن:

فيه function بتنادي function

ودي بترجع struct

ودي بتبعت struct للي بعدها

واللي بعدها بتطبع بناءً على اللي قبلها


*/