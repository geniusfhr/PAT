#include<iostream>
#include<string>
#include <cctype>

void _1029(std::string& str1, std::string& str2)
{
	bool flag[200] ;
	for (bool& b : flag) {
		b = false;
	}

	for (std::string::iterator it1 = str1.begin(), it2 = str2.begin();
		it1 != str1.end();) {
		if (*it1 != *it2) {
			if (std::isalpha(*it1)) {
				*it1 = toupper(*it1);
			}

			if (flag[*it1] == false) {
				std::cout << (char)*it1;
				flag[*it1] = true;		
			}
			it1++;
			continue;
		}

		if (*it1 == *it2) {
			it1++;
			if (it2+1 != str2.end()) {
				it2++;
			}
		}
	}

}

