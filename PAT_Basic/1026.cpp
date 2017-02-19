#include <cstdio>

void _1026(int c1,int c2)
{
	int c = c2 - c1;
	if (c % 100 >= 50) {
		c = c / 100 + 1;
	} else {
		c = c / 100;
	}

	std::printf("%02d:%02d:%02d\n", c / 3600, c % 3600 / 60, c % 60);
}

int main()
{
	int a, b;
	std::scanf("%d%d", &a, &b);
	_1026(a, b);

	return 0;
}