#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    cout << "Нажмите Enter..." << endl;
    cin.get();

    auto start = steady_clock::now();

    cout << "Нажмите Enter еще раз..." << endl;
    cin.get();

    auto finish = steady_clock::now();

    auto sec = duration_cast<seconds>(finish - start);

    cout << "Прошло " << sec.count() << " секунд." << endl;

    return 0;
}
