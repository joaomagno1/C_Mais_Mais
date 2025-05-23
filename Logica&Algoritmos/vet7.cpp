#include <iostream>
using namespace std;

int main(){
    int A[5], B[5], M[10];


    cout << "Digite os 5 elementos do vetor A:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "Digite os 5 elementos do vetor B:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> B[i];
    }


    for (int i = 0; i < 5; i++) {
        M[i] = A[i];
    }

    for (int i = 0; i < 5; i++) {
        M[5 + i] = B[i];
    }
    cout << "A união dos dois conjuntos é: "
    for (int i = 0; i <10; i++){
    cout << M[i] << " ";
    }

    return 0;
}