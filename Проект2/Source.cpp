#include "Header.h"

int main(int argc, char **argv)
{
	system("color f0");
	time t1(12, 10, 30), t2, t;

	std::cout << " > ";
	std::cin >> t2;

	t = t1 + t2;

	std::cout << t << std::endl;

	system("pause");
	return NULL;
}