#include <iostream>

void _1046(int n)
{
	int win_a = 0, win_b = 0;
	for (int i = 0; i < n; i++) {
		int a_1, a_2, b_1, b_2;
		std::cin >> a_1 >> a_2 >> b_1 >> b_2;

		if (a_2 == a_1 + b_1 && b_2 != a_1 + b_1) {
			win_a++;
		}

		if (a_2 != a_1 + b_1 && b_2 == a_1 + b_1) {
			win_b++;
		}
	}

	std::cout << win_b << " " << win_a;

}


