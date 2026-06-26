#include <iostream>
#include <ctime>

using namespace std;

string months[] =
{
    "январь",
    "февраль",
    "март",
    "апрель",
    "май",
    "июнь",
    "июль",
    "август",
    "сентябрь",
    "октябрь",
    "ноябрь",
    "декабрь"
};

string currentDate()
{
    time_t now = time(0);

    tm *t = localtime(&now);

    string s;

    if(t->tm_mday<10)
        s+="0";

    s+=to_string(t->tm_mday);
    s+="/";
    s+=months[t->tm_mon];
    s+="/";
    s+=to_string(t->tm_year+1900);

    return s;
}

void test()
{
    cout<<currentDate()<<endl;
}

int main()
{
    test();

    return 0;
}
