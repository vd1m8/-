#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string fio;
    string birth;
};

struct Schoolboy
{
    Person person;
    string school;
    string schoolClass;
};

struct Student
{
    Person person;
    string university;
    string faculty;
    string group;
};

int main()
{
    int type;

    cout << "1 - Школьник\n2 - Студент\n";
    cin >> type;
    cin.ignore();

    if (type == 1)
    {
        Schoolboy s;

        cout << "ФИО: ";
        getline(cin, s.person.fio);

        cout << "Дата рождения: ";
        getline(cin, s.person.birth);

        cout << "Школа: ";
        getline(cin, s.school);

        cout << "Класс: ";
        getline(cin, s.schoolClass);

        cout << "\nИнформация введена успешно.";
    }
    else
    {
        Student s;

        cout << "ФИО: ";
        getline(cin, s.person.fio);

        cout << "Дата рождения: ";
        getline(cin, s.person.birth);

        cout << "ВУЗ: ";
        getline(cin, s.university);

        cout << "Факультет: ";
        getline(cin, s.faculty);

        cout << "Группа: ";
        getline(cin, s.group);

        cout << "\nИнформация введена успешно.";
    }

    return 0;
}
