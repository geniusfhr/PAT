#include <iostream>
#include <iomanip>

void _1012()
{
	int n;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
	int a2_count = -1, a2_sum = 0;
	int a3_count = 0;
	int a4_count = 0, a4_sum = 0;
	int a5_max = 0,a5_count = 0;

	while (std::cin >> n) {
		int t = n % 5;
		switch (t) {
		case 0:
			if (n % 2 == 0) {
				a1 += n;
			}
			break;

		case 1:
			a2_count = -a2_count;
			a2_sum += a2_count * n;
			break;

		case 2:
			a3_count++;
			break;

		case 3:
			a4_count++;
			a4_sum += n;
			break;

		case 4:
			a5_count++;
			if (n >= a5_max) {
				a5_max = n;
			}
			break;
			
		default:
			break;
		}
	}
	if (a1 != 0)
		std::cout << a1 << " ";
	else 
		std::cout << 'N' << " ";

	if (a2_sum != 0)
		std::cout << a2_sum << " ";
	else
		std::cout << 'N' << " ";

	if (a3_count != 0)
		std::cout << a3_count << " ";
	else
		std::cout << 'N' << " ";

	std::cout << std::setiosflags(std::ios::fixed);
	std::cout << std::setprecision(1);
	if (a4_sum != 0)
		std::cout << ((double)a4_sum) / a4_count << " ";
	else
		std::cout << 'N' << " ";

	if (a5_count != 0)
		std::cout << a5_max;
	else
		std::cout << 'N';
	
}



