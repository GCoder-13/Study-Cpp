#include <iostream>
#include <conio.h>
#include "Header.h"

int main(int argc, char **argv)
{
	system("color f0");
	tollBooth main;
	const char ESC = 27;
	char press;

	do
	{
		std::cout << "Entre:\n\t 0 - NO;\n\t 1 - YES;\n\t ESC - EXIT;" << std::endl;
		std::cout << " > ";
		press = _getche();
		std::cout << std::endl;
		switch (press)
		{
			case '0': main.nopayCar(); break;
			case '1': main.payingCar(); break;
			default: break;
		}
	} 
	while (press != ESC);
	main.display();
	system("pause");
	return NULL;
}