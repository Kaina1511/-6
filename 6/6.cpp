#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int n = 20;
	int m[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 10;
		cout << m[i] << " ";
	}
	int i;
	int d = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (m[i] == m[i + 1])
		{
			d++;
		}
	}
	cout << "\n" <<"Кол-во пар: " << d;
}