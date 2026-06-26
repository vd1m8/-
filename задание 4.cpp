#include <iostream>
#include <cmath>

using namespace std;

double length(double a[], int n)
{
    double s = 0;

    for (int i = 0; i < n; i++)
        s += a[i] * a[i];

    return sqrt(s);
}

void test()
{
    double v[] = {3,4};
    cout << "Тест: " << length(v,2) << endl;
}

int main()
{
    test();

    int n;

    cout << "Размерность = ";
    cin >> n;

    double *a = new double[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Длина = "<<length(a,n);

    delete[] a;

    return 0;
}
