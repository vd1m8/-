#include <iostream>
#include <string>

using namespace std;

string trim(string s)
{
    while(!s.empty() && s.front()==' ')
        s.erase(s.begin());

    while(!s.empty() && s.back()==' ')
        s.pop_back();

    return s;
}

void test()
{
    cout<<"["<<trim("   Привет мир   ")<<"]"<<endl;
}

int main()
{
    test();

    string s;

    cout<<"Введите строку:"<<endl;
    getline(cin,s);

    cout<<"["<<trim(s)<<"]";

    return 0;
}
