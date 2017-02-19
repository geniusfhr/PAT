#include <iostream>

void _1061(int student_number, int problem_number)
{
	int full_score[100];
	int correct_anwser[100];
	
	for (int i = 0; i < problem_number; i++) {		
		std::cin >> full_score[i];							
	}

	for (int i = 0; i < problem_number; i++) {
		std::cin >> correct_anwser[i];
	}

	for (int i = 0; i < student_number; i++) {
		int current_answer;
		int current_score = 0;

		for (int j = 0; j < problem_number; j++) {
			std::cin >> current_answer;
			if (current_answer == correct_anwser[j]) {
				current_score += full_score[j];
			}
		}

		std::cout << current_score << std::endl;
	}
	
}


