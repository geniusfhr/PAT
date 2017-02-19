#include <iostream>

void _1032(int n)
{
	int a[10010] = {0};
	int school, score;
	for (int i = 1; i <= n; i++) {
		std::cin >> school >> score;
		a[school] += score;
	}

	int school_max = 0, score_max = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] >= score_max) {
			school_max = i;
			score_max = a[i];
		}
	}

	std::cout << school_max << " " << score_max << std::endl;

}

