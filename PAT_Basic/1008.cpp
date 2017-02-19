#include <iostream>

void _1008(int a[], int n, int m)		
{
	m = m % n;
	for (int i = n; i >= 1; i--) {
		a[i + m] = a[i];
	}

	for (int i = n + 1; i <= n + m; i++) {
		a[i - n] = a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (i != 1) {
			std::cout << " ";
		}
		std::cout << a[i] ;
	}

}
