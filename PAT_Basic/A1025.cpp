#include <iostream>
#include <string>
#include <algorithm>

struct Student
{
	std::string id;
	int score;
	int localNumber;
	int localRank;
	int finalRank;
};

Student stu[100000];

bool cmp(Student stu1, Student stu2)
{
	if (stu1.score != stu2.score) {
		return stu1.score > stu2.score;
	} else {
		return stu1.id < stu2.id;
	}
}

void _A1025(int n)
{
	int index = 0;
	int numbers = 0;
	for (int i = 1; i <= n; i++) {			// 1~i locations
		int stuNumbers;
		std::cin >> stuNumbers;
		numbers += stuNumbers;

		for (int j = 0; j < stuNumbers; j++) {
			std::cin >> stu[index].id;
			std::cin >> stu[index].score;
			stu[index].localNumber = i;
			index++;
		}
	}

	std::sort(stu, stu+index, cmp);
	/* update local rank */
	for (int i = 1; i <= n; i++) {
		int local = 1;
		int preScore = -1;
		for (int j = 0; j < index; j++) {
			if (stu[j].localNumber == i) {
				if (stu[j].score != preScore) {
					stu[j].localRank = local;
				} else {
					stu[j].localRank = local - 1;
				}
				local++;
				preScore = stu[j].score;
			}
		}
	}

	int final = 1;
	int preScore = -1;
	for (int i = 0; i < index; i++) {
		if (stu[i].score != preScore) {
			stu[i].finalRank = final;
		} else {
			stu[i].finalRank = final - 1;
		}
		preScore = stu[i].score;
		final++;
	}

	std::cout << numbers << std::endl;

	for (int i = 0; i < index; i++) {
		std::cout << stu[i].id << " "
			<< stu[i].finalRank << " "
			<< stu[i].localNumber << " "
			<< stu[i].localRank
			<< std::endl;
	}
}

