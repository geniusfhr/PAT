#include<iostream>
#include <cmath>
#include <iomanip>

double fun(int x, int y)
{
	double s = pow(x, 2) + pow(y, 2);
	return pow(s, 0.5);
}

double _1063(int n)
{
	double max = 0;
	int q, p;
	for (int i = 0; i < n; i++) {
		std::cin >> p >> q;
		double t = fun(p, q);
		if (t > max) {
			max = t;
		}
	}

	return max;
}

/*
int main()
{
	int n;
	std::cin >> n;
	std::cout << std::setiosflags(std::ios::fixed) 
			  << std::setprecision(2)
			  << _1063(n);

	return 0;
}

*/