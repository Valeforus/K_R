#include <iostream>
#include <string>
#include "search.h"

using namespace std;

int main()
{
	setlocale(0, "");

	string str;
	cout << "Введите строку!" << endl;
	getline(cin, str);
	cout << "Наименьшее число в строке: " << search(str) << endl;
}