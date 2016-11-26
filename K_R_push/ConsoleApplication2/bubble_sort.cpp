#include <iostream>;
#include "bubble_sort.h";

using namespace std;

void bubble_sort(int *a, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < length - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
