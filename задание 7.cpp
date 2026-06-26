#include <iostream>

using namespace std;

int reverseNumber(int n)
{
    int rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

void printReverseNumbers(int N)
{
    for (int i = 1; i <= N; i++)
        cout << i << " -> " << reverseNumber(i) << endl;
}

void test()
{
    cout << reverseNumber(12345) << endl;
}

int main()
{
    test();

    int N;

    cout << "Введите N: ";
    cin >> N;

    printReverseNumbers(N);

    return 0;
}
