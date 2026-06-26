#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    ofstream out("numbers.bin", ios::binary);

    for (int i = 0; i < 10000; i++)
    {
        int x = rand() % 2 == 0 ? -1 : 1;
        out.write((char*)&x, sizeof(int));
    }

    out.close();

    ifstream in("numbers.bin", ios::binary);

    int* a = new int[10000];

    in.read((char*)a, sizeof(int) * 10000);

    int sum = 0;

    for (int i = 0; i < 10000; i++)
        sum += a[i];

    cout << "Сумма = " << sum << endl;

    delete[] a;

    in.close();

    return 0;
}
