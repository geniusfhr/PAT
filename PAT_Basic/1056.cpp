#include<iostream>

int _1056(int n, int a[])
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum*(n - 1) * 10 + sum*(n - 1);
}



