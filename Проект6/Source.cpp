#include "Header.h"

int main(int argc, char **argv)
{
	system("color f0");

	employee emp;

	emp.getdata();
	std::cout << std::endl;
	emp.putdata();
	std::cout << std::endl;

	PAUSE;
	return NULL;
}