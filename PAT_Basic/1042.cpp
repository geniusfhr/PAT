#include <iostream>
#include <cctype>

void _1042()
{
	char c;
	int a[500] = {0};
	while ((c = std::getchar()) != '\n') {
		if (std::isalpha(c)) {
			c = std::tolower(c);
			a[c - 'a']++;
		}
	}

	int max_index = 0, max_times = 0;
	for (int i = 0; i < 500; i++) {
		if (a[i] && a[i] > max_times) {
			max_index = i;
			max_times = a[i];
		}
	}

	std::cout << char('a' + max_index) << " " << max_times << std::endl;

}

