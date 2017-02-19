#include<iostream>
#include<vector>

bool is_primer(int n)
{
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int _1007(int n)
{
	std::vector<int> v;
	for (int i = 2; i <= n; i++) {
		if (is_primer(i)) {
			v.push_back(i);
		}
	}

	int count = 0;
	for (int i = v.size() - 1; i >= 1; i--) {
		if (v[i] - v[i - 1] == 2) {
			count++;
		}
	}

	return count;

}











