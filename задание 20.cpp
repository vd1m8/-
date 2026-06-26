#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x * x - 2;
}

double binary(double a, double b)
{
    if (fabs(b - a) < 0.000001)
        return (a + b) / 2;

    double c = (a + b) / 2;

    if (f(a) * f(c) <= 0)
        return binary(a, c);
    else
        return binary(c, b);
}

void test()
{
    cout << binary(1, 2) << endl;
}

int main()
{
    test();

    double a, b;

    cout << "Введите границы: ";
    cin >> a >> b;

    cout << "Корень = " << binary(a, b);

    return 0;
}
