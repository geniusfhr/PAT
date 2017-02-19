#include <iostream>
#include <string>
#include <cctype>

void _1057(std::string& str)
{
	int n = 0;
	int c;
	for (char t : str) {
		if (std::isalpha(t)) {
			c = std::tolower(t) - 'a' + 1;
			n += c;					// get sum
		}
	}

	int num_0 = 0;
	int num_1 = 0;
	int t;

	while (n) {
		t = n % 2;
		n = n / 2;
		if (t == 1) {
			num_1++;
		} else {			// t == 0
			num_0++;
		}
	}

	std::cout << num_0 << " " << num_1 << std::endl;	
}

