#include <iostream>
#include <string>


bool pass(std::string str)
{
	int j = 0, k = 0, l = 0;
	int current = 0;
	while (str[current] == 'A' ) {				//������һ��PǰA
		j++;
		current++;
	}

	if (str[current] != 'P') {
		return false;
	}

	current++;									//������P��
	while (str[current] == 'A') {				//�����м��A
		k++;
		current++;
	}

	if (str[current] != 'T' || k == 0) {					
		return false;
	}

	current++;									//����T
	while (current < str.length() && str[current] == 'A') {
		l++;									//����ĩβA
		current++;
	}

	if (j * k == l && current == str.length()) {
		return true;
	} else {
		return false;
	}
}
