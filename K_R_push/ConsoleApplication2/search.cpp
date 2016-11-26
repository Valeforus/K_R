#include <iostream>;
#include "search.h";
#include "bubble_sort.h"


using namespace std;

int search(string str)
{
	string st = "";
	int digits[100], count = 0;
	for (unsigned int i = 0; i < str.length() + 1; i++)
		if (isdigit(str[i]) || (str[i] == '-'))
		{
			st = st + str[i];
			while (isdigit(str[i + 1]))
			{
				st = st + str[i + 1];
				i++;
			}
			digits[count] = atoi(st.c_str());
			count++;
			st = "";
		}
	bubble_sort(digits, count);
	return digits[0];
}
