#include <iostream>
#include <string>

void _1039(std::string& str1, std::string& str2)
{
	int times[200];
	for (int& t : times) {
		t = 0;
	}

	for (int c : str1) {
		times[c]++;
	}

	for (int c : str2) {
		times[c]--;
	}

	int more = 0;
	int less = 0;
	for (int t : times) {
		if (t < 0) {
			less += t;
		} 

		if (t > 0) {
			more += t;
		}
	}

	
	if (less < 0) {
		std::cout << "No " << -less << std::endl;
	} 

	if (less == 0) {
		std::cout << "Yes " << more << std::endl;
	}	
}

