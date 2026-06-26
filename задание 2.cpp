#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int rows = 100;
    int cols = 200;

    int **a = new int*[rows];

    for (int i = 0; i < rows; i++)
        a[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            a[i][j] = rand() % 14 - 3;

    cout << "Массив заполнен." << endl;

    for (int i = 0; i < rows; i++)
        delete[] a[i];

    delete[] a;

    return 0;
}
