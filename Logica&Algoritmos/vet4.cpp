#include <iostream>
using namespace std;

int main(){
    int a[10], b[10], m[10];


    cout << "Digite os 10 elementos do vetor A:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Digite os 10 elementos do vetor B:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> b[i];
    }


    for (int i = 0; i < 10; i++) {
        m[i] = a[i] * b[i];
    }

    cout << "Vetor M (A * B): ";
    for (int i = 0; i < 10; i++) {
        cout << m[i] << " ";
    }
    cout << endl;

    return 0;
}