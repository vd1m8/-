#include <iostream>

using namespace std;

int main() {

    float eps = 1.0f;

    while (1.0f + eps / 2 > 1.0f)
        eps /= 2;

    cout << "Машинный эпсилон = " << eps << endl;

    float zero = 1.0f;

    while (zero / 2 > 0)
        zero /= 2;

    cout << "Машинный ноль = " << zero << endl;

    return 0;
}
