#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    string fio;
    string birth;
};

struct Worker
{
    Employee emp;
    string profession[5];
    int category[5];
};

struct Programmer
{
    Employee emp;
    string university;
    int graduationYear;
    string language[5];
    string level[5];
};

int main()
{
    int type;

    cout << "1 - Рабочий\n2 - Программист\n";
    cin >> type;
    cin.ignore();

    if (type == 1)
    {
        Worker w;

        cout << "ФИО: ";
        getline(cin, w.emp.fio);

        cout << "Дата рождения: ";
        getline(cin, w.emp.birth);

        for (int i = 0; i < 5; i++)
        {
            cout << "Профессия " << i + 1 << ": ";
            getline(cin, w.profession[i]);

            cout << "Категория: ";
            cin >> w.category[i];
            cin.ignore();
        }
    }
    else
    {
        Programmer p;

        cout << "ФИО: ";
        getline(cin, p.emp.fio);

        cout << "Дата рождения: ";
        getline(cin, p.emp.birth);

        cout << "ВУЗ: ";
        getline(cin, p.university);

        cout << "Год окончания: ";
        cin >> p.graduationYear;
        cin.ignore();

        for (int i = 0; i < 5; i++)
        {
            cout << "Язык " << i + 1 << ": ";
            getline(cin, p.language[i]);

            cout << "Уровень владения: ";
            getline(cin, p.level[i]);
        }
    }

    return 0;
}
