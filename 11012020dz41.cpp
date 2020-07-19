/*
* Пользователь 	вводит текущий год и год его рождения.Посчитать, сколько лет пользователю.
*/
#include <iostream>
using namespace std;
int main()
{
	int date, birthday;
	cout << "Enter year date:";
	cin >> date;
	cout << endl << "Enter year birthday:";
	cin >> birthday;
	cout << "Your age " << date - birthday << endl;
	return 0;
}
