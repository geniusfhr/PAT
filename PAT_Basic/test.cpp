#include <iostream>


bool hashTable[100] = { false };
int p[6] = {0};
int n;

void generateP(int index)
{
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			std::cout << p[i] << " ";
		}

		std::cout << std::endl;
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (hashTable[i] == false) {
			p[index] = i;
			hashTable[i] = true;
			generateP(index + 1);
			hashTable[i] = false;
		}
	}
}





