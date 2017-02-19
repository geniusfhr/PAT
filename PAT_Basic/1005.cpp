#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

void _1005(int a[])
{
	for (int t = 0; t < 200; t++) {
		int i = t;
		if (a[i] == 1) {
			while (i != 1) {
				if (i % 2 == 0) {
					i = i / 2;
				} else {
					i = (3 * i + 1) / 2;
				}

				if (a[i] == 1) {
					a[i]++;
				}
			}
		}
	}

	std::vector<int> v;
	for (int i = 0; i < 200; i++) {
		if (a[i] == 1) {
			v.push_back(i);
		}
	}

	std::sort(v.begin(), v.end(), std::greater<int>());			
	int flag = 0;
	for (int a : v) {
		if (flag != 0) {
			std::cout << " ";			
		}
		std::cout << a;
		flag = 1;
	}

}











