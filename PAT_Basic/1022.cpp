#include <iostream>

void _1022(int n, int d)
{
	int a[10000] = {0};
	int i = 0;

	do {
		a[i++] = n % d;
		n = n / d;
	} while (n);						//¿¼ÂÇ n = 0

	i--;		

	for (int j = i; j >= 0; j--) {
		std::cout << a[j];
	}

}

