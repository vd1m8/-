#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

Date readDate(string s)
{
    Date d;

    d.day = stoi(s.substr(0,2));
    d.month = stoi(s.substr(3,2));
    d.year = stoi(s.substr(6,4));

    return d;
}

int compare(Date a, Date b)
{
    if (a.year != b.year)
        return a.year - b.year;

    if (a.month != b.month)
        return a.month - b.month;

    return a.day - b.day;
}

void test()
{
    Date a = readDate("01/01/2024");
    Date b = readDate("05/02/2024");

    cout << compare(a,b) << endl;
}

int main()
{
    test();

    string s1,s2;

    cout << "Введите первую дату: ";
    cin >> s1;

    cout << "Введите вторую дату: ";
    cin >> s2;

    int r = compare(readDate(s1), readDate(s2));

    if(r<0)
        cout<<"Первая дата раньше";

    else if(r>0)
        cout<<"Первая дата позже";

    else
        cout<<"Даты одинаковые";

    return 0;
}
