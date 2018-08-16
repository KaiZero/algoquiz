#include <iostream>
#include <string>

int main()
{
	int caseCount = 0;
	std::cin >> caseCount;

	for (int i = 0; i < caseCount; i++)
	{
		std::string userName;
		std::cin >> userName;
		std::cout << "Hello, " << userName << "!" << std::endl;
	}

	return 0;
}