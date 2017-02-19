#include <iostream>

void _1010()
{
	int n, m, count = 0;
	while (std::cin >> n && std::cin >> m) {
		count++;
		if (m != 0) {
			if (count != 1) {
				std::cout << " ";
			} 
			std::cout << n * m << " " << m - 1;
		
		} else {
			if (count == 1) {
				std::cout << "0 0" << std::endl;
				return;
			}
		}
	
	} 

}
