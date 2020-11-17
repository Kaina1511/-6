#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 10;
    int m[n];
    int i;
    cout << "Введи 10 цифр"<<"\n";
    for (i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    cout << "Массив из введеных цифр - ";
    for (i = 0; i < n; i++)
    {
        cout << m[i] << " " ;
    }
    return 0;
}
