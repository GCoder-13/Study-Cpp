#include "Header.h"

std::string Transform(std::string str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'z' - 'Z';
	for (int i(1); i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'z' - 'Z';
	}

	return str;
}

employee::employee(): num(0) {}

employee::employee(std::string NAME, long nn): name(NAME), num(nn) {}

void employee::getdata()
{
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Enter your number: ";
	if (!(std::cin >> num))
	{
		std::cout << "Incorrect input!" << std::endl;
		PAUSE;
		exit(-1);
	}
}