#include<iostream>
#include <string>

void _1006(int n)
{
	int a[3] = { 0 };
	int i = 0;
	while (n) {
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	
	for (int i = 0; i < a[2]; i++) {
		std::cout << "B";
	}

	for (int i = 0; i < a[1]; i++) {
		std::cout << "S";
	}

	for (int i = 1; i <= a[0]; i++) {
		std::cout << i;
	}

}

