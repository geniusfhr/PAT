#include <iostream>

void _1016(long long a, int da, long long b, int db)
{
	long long pa = 0, pb = 0;
	int t;
	while (a) {
	    t = a % 10;
		a = a / 10;
		if (t == da) {
			pa = pa * 10 + t;
		}
	}

	while (b) {
		t = b % 10;
		b = b / 10;
		if (t == db) {
			pb = pb * 10 + t;
		}
	}

	std::cout << pa + pb << std::endl;

}

