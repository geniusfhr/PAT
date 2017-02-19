#include<iostream>

void _1018(int n)
{
	char x, y;
	int a_win = 0;
	int a_equal = 0;
	int a_fail = 0;

	int a_win_hand[200] = { 0 };
	int b_win_hand[200] = { 0 };

	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		if (   (x == 'C' && y == 'J')
			|| (x == 'J' && y == 'B')
			|| (x == 'B' && y == 'C') ) {				// ¼× win
			a_win++;
			a_win_hand[x]++;
		} else if (x == y ) {
			a_equal++;
		} else {										//¼× fail
			a_fail++;
			b_win_hand[y]++;
		}
	}

	std::cout << a_win << " " << a_equal << " " << a_fail << std::endl;
	std::cout << a_fail << " " << a_equal << " " << a_win << std::endl;
	
	int a_max = -1,a_index = -1, b_max = -1,b_index = -1;
	
	for (int i = 0; i < 200; i++) {
		if (a_win_hand[i] > a_max) {
			a_max = a_win_hand[i];
			a_index = i;
		}

		if(b_win_hand[i] > b_max) {
			b_max = b_win_hand[i];
			b_index = i;
		}
	}

	std::cout << (char)a_index << " " << (char)b_index;
}
