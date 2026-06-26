#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return -x * x + 4 * x + 1;
}

double maxFunction(double a, double b, double step)
{
    double mx = f(a);

    for (double x = a; x <= b; x += step)
        if (f(x) > mx)
            mx = f(x);

    return mx;
}

void test()
{
    cout << maxFunction(-5, 5, 0.01) << endl;
}

int main()
{
    test();

    double a, b;

    cout << "Введите a и b: ";
    cin >> a >> b;

    cout << "Максимум = "
         << maxFunction(a, b, 0.001);

    return 0;
}
