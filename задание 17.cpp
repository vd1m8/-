#include <iostream>
#include <string>

using namespace std;

int lastIndex(string s, char c)
{
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] == c)
            return i;

    return -1;
}

void test()
{
    cout << lastIndex("Программирование", 'р') << endl;
}

int main()
{
    test();

    string s;
    char c;

    cout << "Введите строку: ";
    getline(cin, s);

    cout << "Введите символ: ";
    cin >> c;

    int pos = lastIndex(s, c);

    if (pos == -1)
        cout << "Символ не найден.";
    else
        cout << "Последнее вхождение: " << pos;

    return 0;
}
