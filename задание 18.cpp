#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return x * x * x;
}

double derivative(double (*func)(double), double x)
{
    const double h = 0.000001;

    return (func(x + h) - func(x - h)) / (2 * h);
}

void test()
{
    cout << derivative(f, 2) << endl;
}

int main()
{
    test();

    double x;

    cout << "Введите x: ";
    cin >> x;

    cout << "Производная = " << derivative(f, x);

    return 0;
}
