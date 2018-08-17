#include <iostream>

int GetAnswer(int, int, int);

int main()
{
	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int answer[2];
		int value[3][2];

		std::cin >> value[0][0] >> value[0][1];
		std::cin >> value[1][0] >> value[1][1];
		std::cin >> value[2][0] >> value[2][1];

		answer[0] = GetAnswer(value[0][0], value[1][0], value[2][0]);
		answer[1] = GetAnswer(value[0][1], value[1][1], value[2][1]);

		std::cout << answer[0] << " " << answer[1] << std::endl;
	}

	return 0;
}

int GetAnswer(int a, int b, int c)
{
	if (a == b) return c;
	if (a == c) return b;
	if (b == c) return a;
	return 0;
}