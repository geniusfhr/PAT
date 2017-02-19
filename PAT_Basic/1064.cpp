#include <iostream>
#include <set>
#include <algorithm>
#include <functional>

void _1064(int n)
{
	std::set<int> s;
	int t;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		std::cin >> t;
		while (t) {
			sum += t % 10;
			t = t / 10;
		}
		s.insert(sum);
	}

	bool first_flag = false;
	//std::sort(s.begin(), s.end(), std::greater<int>());
	for (std::set<int>::iterator it = s.begin(); it != s.end(); it++) {
		if (first_flag) {
			std::cout << " ";
		}
		std::cout << *it;
		first_flag = true;
	}

}

