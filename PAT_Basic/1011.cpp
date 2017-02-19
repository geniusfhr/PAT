#include<iostream>

void _1011(int n)
{
	long a, b, c;						//long int
	for (int i = 1; i <= n; i++) {
		std::cin >> a >> b >> c;
		if (a + b > c) {
			std::cout << "Case #" << i << ":" << " true" << std::endl;
		} else {
			std::cout << "Case #" << i << ":" << " false" << std::endl;
		}
	}
}

