#include "Header.h"

int main(int argc, char **argv)
{
	system("color f0");
	employee first, second, third;

	std::cout << "\t First employer:" << std::endl;
	first.getEmploy();
/*	std::cout << "\t Second employer:" << std::endl;
	second.getEmploy();
	std::cout << "\t Third employer:" << std::endl;
	third.getEmploy();
*/
	std::cout << std::endl;

	std::cout << "\t First employer:" << std::endl;
	first.putEmploy();
/*	std::cout << "\t Second employer:" << std::endl;
	second.putEmploy();
	std::cout << "\t Third employer:" << std::endl;
	third.putEmploy();
*/
	system("pause");
	return NULL;
}