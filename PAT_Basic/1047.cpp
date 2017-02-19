#include <iostream>

void _1047(int n )
{
	int s[10000] = {0};
	for (int i = 0; i < n; i++) {
		int team_id, id, score;
		std::cin >> team_id >> id >> score;
		s[team_id] += score;
	}

	int team_id_max = 0;
	int score_max = 0;

	for (int i = 0; i < 10000; i++) {
		if (s[i] && s[i] >= score_max) {
			team_id_max = i;
			score_max = s[i];
		}
	}

	std::cout << team_id_max << " " << score_max << std::endl;

	
}

