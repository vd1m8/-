#include <iostream>

using namespace std;

int countEven(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            count++;

    return count;
}

void test()
{
    int a[] = {1,2,3,4,5,6};

    cout << countEven(a,6) << endl;
}

int main()
{
    test();

    int n;

    cout << "Размер массива: ";
    cin >> n;

    int *a = new int[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Количество четных = "<<countEven(a,n);

    delete[] a;

    return 0;
}
