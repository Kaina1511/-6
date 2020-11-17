#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int n = 30;
	int m[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 21 + (-10);
		cout << m[i] << " ";
	}
	cout << "\n";
	int mini = m[0];
	int a;
	for (int i = 0; i < n; i++)
	{
		if (m[i] < mini)
		{
			mini = m[i];
			a = i;
		}
	}
	int max = m[0];
	int b;
	for (int i = 0; i < n; i++)
	{
		if (m[i] > max)
		{
			max = m[i];
			b = i;
		}
	}
	cout << "Наименьшее число: " << mini << "\n";
	cout << "Наибольшее число: " << max;
	for (int i = 0; i < n; i++)
	{
		int c = m[a];
		m[a] = m[b];
		m[b] = c;
		cout <<"\n"<< m[i] << " ";
	}
}
