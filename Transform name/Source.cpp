#include <iostream>

using namespace std;

char* Transform(char* str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'z' - 'Z';
	for (int i = 1; i<strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'z' - 'Z';
	}

	return str;
}

int main() {

	char name[50], surname[50];

	cout << "Name > ";
	cin >> name;
	cout << "Surname > ";
	cin >> surname;

	cout << endl << Transform(name) << " " << Transform(surname) << endl;

	system("PAUSE");
	return NULL;
}