#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    const int n=100;
    int m[n]={};
    for (int i = 0; i <= n; i++)
    {
        m[i] = rand() % 21 - 10;
        cout << m[i] << " ";
    }

    cout << "\n"<< "Сумма всех чисел массива: ";
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + m[i];
    }
    cout << s;

    return 0;
}
