#include <iostream>

using namespace std;

void sortArray(double a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

void test()
{
    double a[]={5.4,2.1,8.7,1.5};

    sortArray(a,4);

    for(int i=0;i<4;i++)
        cout<<a[i]<<" ";

    cout<<endl;
}

int main()
{
    test();

    int n;

    cout<<"Введите размер массива: ";
    cin>>n;

    double *a=new double[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sortArray(a,n);

    cout<<"После сортировки:"<<endl;

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    delete[] a;

    return 0;
}
