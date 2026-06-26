#include <iostream>
#include <iomanip>

using namespace std;

bool lucky(int n)
{
    int a = n / 100000;
    int b = n / 10000 % 10;
    int c = n / 1000 % 10;
    int d = n / 100 % 10;
    int e = n / 10 % 10;
    int f = n % 10;

    return (a + b + c) == (d + e + f);
}

void test()
{
    cout << "123321 -> ";
    cout << (lucky(123321) ? "Счастливый" : "Не счастливый") << endl;
}

int main()
{
    test();

    cout << "\nСчастливые билеты:\n";

    for (int i = 0; i <= 999999; i++)
        if (lucky(i))
            cout << setw(6) << setfill('0') << i << endl;

    return 0;
}
