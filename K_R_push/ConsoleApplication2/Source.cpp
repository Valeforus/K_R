#include <iostream>
#include <string>
#include "search.h"

using namespace std;

int main()
{
	setlocale(0, "");

	string str;
	cout << "������� ������!" << endl;
	getline(cin, str);
	cout << "���������� ����� � ������: " << search(str) << endl;
}