#include <iostream>
#include <iomanip>


void _1049(int n, double a[])
{
	//time out
	double sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				sum += a[k];
			}
		}
	}

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) 
			  << sum << std::endl;

}
