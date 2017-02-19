#include <iostream>
#include <cmath>

void _1036(int n, char c)
{
	int length = n;
	int height = std::ceil(n * 0.5);
	
	for (int i = 0; i < n; i++) {			//first line
		std::cout << c;
	}
	std::cout << std::endl;

	for (int i = 0; i < height - 2; i++) {
		std::cout << c;
		for (int j = 0; j < length - 2; j++) {
			std::cout << " ";
		}
		std::cout << c << std::endl;
	}


	for (int i = 0; i < n; i++) {			//last line
		std::cout << c;
	}

}



