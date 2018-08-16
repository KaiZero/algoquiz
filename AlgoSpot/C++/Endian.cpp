#include <iostream>

int main()
{
	int testCount = 0;
	do
	{
		std::cin >> testCount;
	} while (testCount < 1 || testCount > 10000);

	for (int i = 0; i < testCount; i++)
	{
		unsigned int testNumber = 0;
		std::cin >> testNumber;
		unsigned int firstByte = testNumber >> 24;
		unsigned int secondByte = (testNumber & 0x00FF0000) >> 8;
		unsigned int thirdByte = (testNumber & 0x0000FF00) << 8;
		unsigned int fourthByte = (testNumber & 0x000000FF) << 24;
		unsigned int answer = firstByte | secondByte | thirdByte | fourthByte;

		std::cout << answer << std::endl;
	}

	return 0;
}