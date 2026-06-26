#include <iostream>

using namespace std;

int digitSum(int n)
{
    n = abs(n);

    return n / 100 + (n / 10) % 10 + n % 10;
}

void findNumbers(int N)
{
    for (int i = 100; i <= 999; i++)
        if (digitSum(i) == N)
            cout << i << " ";
}

void test()
{
    cout << "Сумма цифр 123 = " << digitSum(123) << endl;
}

int main()
{
    test();

    int N;

    cout << "Введите сумму цифр: ";
    cin >> N;

    findNumbers(N);

    return 0;
}
