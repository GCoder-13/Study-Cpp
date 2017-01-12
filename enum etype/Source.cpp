#include <iostream>
#include <conio.h>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	system("color f0");
	char ch;
	etype work;

	cout << "Enter first a liter employee(laborer, secretary, manager, accountant, executive, researcher): ";
	ch = _getche();
	switch (ch)
	{
	case 'l':
		work = laborer;
		break;
	case 's':
		work = secretary;
		break;
	case 'm':
		work = manager;
		break;
	case 'a':
		work = accountant;
		break;
	case 'e':
		work = executive;
		break;
	case 'r':
		work = researcher;
		break;
	default:
		cout << endl << "\t Incorect enter!" << endl;
		system("pause");
		exit(0);
	}

	cout << endl << "Work is: ";
	switch (work)
	{
	case 0:
		cout << "laborer" << endl;
		break;
	case 1:
		cout << "secretary" << endl;
		break;
	case 2:
		cout << "manager" << endl;
		break;
	case 3:
		cout << "accountant" << endl;
		break;
	case 4:
		cout << "executive" << endl;
		break;
	case 5:
		cout << "researcher" << endl;
		break;
	}

	system("pause");
	return NULL;
}