#include <iostream>

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void selectSort(int n , int a[])
{
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}
