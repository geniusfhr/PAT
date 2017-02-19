#include <iostream>
#include <string>
void _1004(int n)
{
	std::string name,name_max,name_min,id,id_max,id_min;
	int score,score_max = -1,score_min = 101;
	
	for (int i = 0; i < n; i++) {
		std::cin >> name >> id >> score;
		if (score < score_min) {
			score_min = score;
			name_min = name;
			id_min = id;
		}

		if (score > score_max) {
			score_max = score;
			name_max = name;
			id_max = id;
		}
	}
	
	std::cout << name_max << " " << id_max << std::endl;
	std::cout << name_min << " " << id_min << std::endl;

}

