#include <iostream>
#include <string>

using namespace std;

void sortStrings(string a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void test()
{
    string s[] = {"Груша", "Яблоко", "Апельсин", "Банан"};

    sortStrings(s, 4);

    for (int i = 0; i < 4; i++)
        cout << s[i] << endl;
}

int main()
{
    test();

    int n;
    cout << "Количество строк: ";
    cin >> n;
    cin.ignore();

    string *a = new string[n];

    for (int i = 0; i < n; i++)
        getline(cin, a[i]);

    sortStrings(a, n);

    cout << "\nПосле сортировки:\n";

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;

    delete[] a;

    return 0;
}
