#include <iostream>
#include <string>

void _1043(std::string str)
{
	int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;
	for (std::string::iterator it = str.begin(); it != str.end(); it++) {
		switch (*it) {
		case 'P':
			P++; break;
		case 'A':
			A++; break;
		case 'T':
			T++; break;
		case 'e':
			e++; break;
		case 's':
			s++; break;
		case 't':
			t++; break;
		default:
			break;
		}
	}

	while (P || A || T || e || s || t) {
		if (P > 0) {
			std::cout << 'P';
			P--;
		}
		if (A > 0) {
			std::cout << 'A';
			A--;
		}

		if (T > 0) {
			std::cout << 'T';
			T--;
		}
		if (e > 0) {
			std::cout << 'e';
			e--;
		}
		if (s > 0) {
			std::cout << 's';
			s--;
		}
		if (t > 0) {
			std::cout << 't';
			t--;
		}
	}

}

