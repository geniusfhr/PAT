#include <iostream>
#include <algorithm>
#include <iomanip>

struct mooncake
{
	double number;
	double total_price;
	double price;
};

bool cmp(mooncake a, mooncake b)
{
	return a.price > b.price;
}


void _1020(int n,int need)
{
	mooncake a[1000];
	for (int i = 0; i < n; i++) {
		std::cin >> a[i].number;
	}

	for (int i = 0; i < n; i++) {
		std::cin >> a[i].total_price;
		a[i].price = a[i].total_price / a[i].number;
	}

	std::sort(a, a + n, cmp);

	double total_number = 0;
	double TOTAL = 0;
	int i;
	for ( i = 0; i < n; i++) {
		if (total_number + a[i].number <= need) {
			total_number += a[i].number;
			TOTAL += a[i].total_price;
		} else {
			break;
		}
	}

	if (i != n) {
		TOTAL = TOTAL + (need - total_number) * a[i].price;
	}
	
	std::cout << std::setiosflags(std::ios::fixed) 
			  << std::setprecision(2)
			  << TOTAL << std::endl;


}

