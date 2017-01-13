#include "Header.h"

employee::employee(): name(NULL), num(0) {}

employee::employee(std::string NAME, long nn): name(NAME), num(nn) {}

void employee::getdata()
{
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Enter your number: ";
	std::cin >> num;
}
