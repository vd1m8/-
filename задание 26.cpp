#include <iostream>
#include <fstream>

using namespace std;

bool compareFiles(const string& file1, const string& file2)
{
    ifstream f1(file1, ios::binary);
    ifstream f2(file2, ios::binary);

    if (!f1 || !f2)
        return false;

    char c1, c2;

    while (true)
    {
        f1.get(c1);
        f2.get(c2);

        if (f1.eof() && f2.eof())
            return true;

        if (f1.eof() != f2.eof())
            return false;

        if (c1 != c2)
            return false;
    }
}

void test()
{
    cout << "Функция test() выполнена." << endl;
}

int main(int argc, char* argv[])
{
    test();

    if (argc != 3)
    {
        cout << "Использование: program file1 file2";
        return 1;
    }

    if (compareFiles(argv[1], argv[2]))
        cout << "Файлы совпадают.";
    else
        cout << "Файлы различаются.";

    return 0;
}
