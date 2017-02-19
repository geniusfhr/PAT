#include <iostream>
#include <string>
#include <vector>

void _1009()
{
	std::vector<std::string> v;
	std::string str;
	while (std::cin >> str) {
		v.push_back(str);
	}

	
	for (int i = v.size() - 1; i >= 0; i--) {
		if (i != v.size() - 1) {
			std::cout << " ";
		}
		std::cout << v[i];
	}
}

