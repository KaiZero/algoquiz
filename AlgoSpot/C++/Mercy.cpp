#include <iostream>
#include <string>

int main()
{
	int printCount = 0;

	do {
		std::cin >> printCount;
	} while (printCount < 0 || printCount > 10);

	for (int i = 0; i < printCount; i++)
	{
		std::cout << "Hello Algospot!" << std::endl;
	}

	return 0;
}