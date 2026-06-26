#include <iostream>

using namespace std;

bool prime(int x)
{
    if(x<2)
        return false;

    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;

    return true;
}

void printPrime(int N)
{
    for(int i=2;i<=N;i++)
        if(prime(i))
            cout<<i<<" ";
}

void test()
{
    cout<<"До 20:"<<endl;
    printPrime(20);
    cout<<endl;
}

int main()
{
    test();

    int N;

    cout<<"Введите N: ";
    cin>>N;

    printPrime(N);

    return 0;
}
