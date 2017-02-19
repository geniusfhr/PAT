#include <iostream>
#include <string>
#include <algorithm>

int charToNum(char c)
{
	return c - '0';
}


std::string numToPinyin(char c)
{
	std::string py;
	switch (c)
	{
	case '0': 
		py = "ling";
		break;
	case '1':  
		py = "yi";
		break;
	case '2':
		py = "er";
		break;
	case '3':
		py = "san";
		break;
	case '4':
		py = "si";
		break;
	case '5':
		py = "wu";
		break;
	case '6':
		py = "liu";
		break;
	case '7':
		py = "qi";
		break;
	case '8':
		py = "ba";
		break;
	case '9':
		py = "jiu";
		break;
	default:
		break;
	}

	return py;
}



void _1002(std::string str)
{
	int sum = 0;
	for (std::string::iterator it = str.begin(); it != str.end(); it++)	{
		sum = sum + charToNum(*it);
	}


	std::string s = std::to_string(sum);
	int count = 0;									// first blank flag 
	for (std::string::iterator it = s.begin(); it != s.end(); it++ ) {
		if (count != 0) {
			std::cout << " ";
		}
		std::cout << numToPinyin(*it);
		count++;
	}
}


