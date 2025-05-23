#include <iostream>
using namespace std;

int main(){
    int A[10], M[10], Multiplicador;


    cout << "Digite os 10 elementos do vetor A:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    cout << "Digite o valor do Multiplicador: ";
    cin >> Multiplicador;

    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    cout << "Vetor M (A * X): ";
    for (int i = 0; i < 10; i++) {
        cout << M[i] << " ";
    }
    cout << endl;

    return 0;
}