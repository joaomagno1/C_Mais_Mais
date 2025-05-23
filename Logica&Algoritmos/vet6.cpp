#include <iostream>
using namespace std;

int main() {
    int X[10], Y[10];

    cout << "Digite os 10 elementos do vetor X:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << " de X: ";
        cin >> X[i];
    }


    for (int i = 0; i < 10; i++) {
        Y[i] = X[10 - 1 - i];
    }

    cout << "Vetor Y (cópia invertida de X): ";
    for (int i = 0; i < 10; i++) {
        cout << Y[i] << " ";
    }
    cout << endl;

    return 0;
}
