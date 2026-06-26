#include <iostream>

using namespace std;

bool differentDigits(int n)
{
    n = abs(n);

    bool used[10] = {false};

    if (n == 0)
        return true;

    while (n > 0)
    {
        int d = n % 10;

        if (used[d])
            return false;

        used[d] = true;
        n /= 10;
    }

    return true;
}

void findNumbers(int N)
{
    for (int i = 0; i <= N; i++)
        if (differentDigits(i))
            cout << i << " ";
}

void test()
{
    cout << differentDigits(1234) << endl;
    cout << differentDigits(1123) << endl;
}

int main()
{
    test();

    int N;

    cout << "Введите N: ";
    cin >> N;

    findNumbers(N);

    return 0;
}
