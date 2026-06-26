#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int rows = 100;
    int cols = 200;

    float **a = new float*[rows];

    for (int i = 0; i < rows; i++)
        a[i] = new float[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            a[i][j] = -1.0f + (float)rand() / RAND_MAX * 2.0f;

    cout << "Память выделена и массив заполнен." << endl;

    for (int i = 0; i < rows; i++)
        delete[] a[i];

    delete[] a;

    return 0;
}
