#include<iostream>

bool _is_primer(int n)
{
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}


void _1013(int m, int n)
{
	int count = 0;
	int c = 0;
	int start = 2;
	while (true) {
		if (_is_primer(start)) {
			count++;
			if (m <= count) {			//output
				c++;					//output count
				if (c % 10 != 1) {
					std::cout << " ";
				}
				std::cout << start;

				if (c % 10 == 0) {
					std::cout << std::endl;
				}
			}
		}

		if (count >= n) {
			return;
		}

		start++;
	}
}

