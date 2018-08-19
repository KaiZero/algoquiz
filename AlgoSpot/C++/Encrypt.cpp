#include <iostream>
#include <cstring>

int main()
{
	int quizCount = 0;

	std::cin >> quizCount;

	for (int i = 0; i < quizCount; i++)
	{
		char quiz[101] = { 0, };
		std::cin >> quiz;

		char odd[51] = { 0, };
		int oddIndex = 0;
		char even[51] = { 0, };
		int evenIndex = 0;
		char answer[101] = { 0, };

		int length = strlen(quiz);
		for (unsigned int quizIndex = 0; quizIndex < length; quizIndex++)
		{
			if (quizIndex % 2 == 0)
			{
				even[evenIndex] = quiz[quizIndex];
				evenIndex++;
			}
			else
			{
				odd[oddIndex] = quiz[quizIndex];
				oddIndex++;
			}
		}
		strcat(answer, even);
		strcat(answer, odd);

		std::cout << answer << std::endl;
	}

	return 0;
}