#include <iostream>
#include <string>


bool pass(std::string str)
{
	int j = 0, k = 0, l = 0;
	int current = 0;
	while (str[current] == 'A' ) {				//计数第一个P前A
		j++;
		current++;
	}

	if (str[current] != 'P') {
		return false;
	}

	current++;									//跳过‘P’
	while (str[current] == 'A') {				//计数中间的A
		k++;
		current++;
	}

	if (str[current] != 'T' || k == 0) {					
		return false;
	}

	current++;									//跳过T
	while (current < str.length() && str[current] == 'A') {
		l++;									//计数末尾A
		current++;
	}

	if (j * k == l && current == str.length()) {
		return true;
	} else {
		return false;
	}
}
