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
	int k;
	for (int i = 0; i < n; i++)
	{
		if (m[i] < mini)
		{
			mini = m[i];
			k = i;
		}
	}
	cout << "Наименьший элемент: " << mini << "\n";
	cout << "его порядковый номер: " << k;
}
