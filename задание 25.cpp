#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countLines(string file)
{
    ifstream fin(file);

    string s;

    int count=0;

    while(getline(fin,s))
        count++;

    return count;
}

void test()
{
    cout<<"Тест выполнен."<<endl;
}

int main()
{
    test();

    string file;

    cout<<"Введите имя файла: ";

    cin>>file;

    cout<<"Количество строк = "<<countLines(file);

    return 0;
}
