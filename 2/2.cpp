#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int n = 20;
	int m[n] = {};
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 21 -10 ;
		cout << m[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (m[i] < 0)
		{
			m[i] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << " ";
	}
}