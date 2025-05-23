#include <iostream>
using namespace std;

int main() {
    int A[10];
    int maior, menor, posicaoMaior, posicaoMenor;

    cout << "Digite os 10 elementos do vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    maior = menor = A[0];
    posicaoMaior = posicaoMenor = 0;

    for (int i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicaoMaior = i;
        }
        if (A[i] < menor) {
            menor = A[i];
            posicaoMenor = i;
        }
    }

    cout << "Maior elemento: " << maior << " na posição " << posicaoMaior << endl;
    cout << "Menor elemento: " << menor << " na posição " << posicaoMenor << endl;

    return 0;
}
