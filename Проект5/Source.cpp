#include <iostream>
#include <iomanip>
#include <cstring>

char* reversit(char *a)
{
	const int n = strlen(a);
	char temp;

	for (int i(0); i < n-i-1; i++)
	{
		temp = a[i];
		a[i] = a[n - i-1];
		a[n - i-1] = temp;
	}

	return a;
}

int main(int argc, char **argv)
{
	const int MAX = 20;
	char str[MAX];

	std::cout << " > ";
	std::cin >> std::setw(MAX);
	std::cin.get(str, MAX);
	strcpy_s(str,reversit(str));

	std::cout << std::endl << '\t' << str << std::endl;

	system("pause");
	return NULL;
}