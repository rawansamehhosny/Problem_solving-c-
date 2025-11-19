

#include <iostream>
float num1, num2, num3;

float average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

using namespace std;
int main()
{
	cout << "Enter the first mark: ";
	cin >> num1;
	cout << "Enter the second mark: ";
	cin >> num2;
	cout << "Enter the third mark: ";
	cin >> num3;
	float avg = average(num1, num2, num3);

	if (avg >= 50)
	{
		cout << endl;
		cout << "You passed with an average of " << avg << endl;
	}
	else
	{
		cout << endl;
		cout << "You failed with an average of " << avg << endl;
	}
}

