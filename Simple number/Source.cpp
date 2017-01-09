#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	system("color f0");

	int N;
	bool *arr;

	cout << "Input numder: ";
	cin >> N;

	arr = new bool[N + 1];

	for (int i = 2; i <= N; i++)
		arr[i] = true;

	for (int i = 2; i <= N; i++)
	{
		if (arr[i])
		{
			for (int j = i*i; j <= N; j += i)
				arr[j] = false;
		}
	}

	for (int i = 2; i <= N; i++)
		if (arr[i])
			cout << i << endl;

	delete[] arr;
	_getch();
	return 0;
}