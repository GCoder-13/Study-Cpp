#include "Header.h"

int main(int argc, char **argv)
{
	employee first, second, third;

	std::cout << "Enter number employer and money: " << std::endl;

	first.get();
	second.get();
	third.get();

	std::cout << std::endl;

	first.show();
	second.show();
	third.show();

	system("pause");
	return NULL;
}