#include<iostream>
using namespace std;

int n1, n2;
int main()
{
    cout << "Digite o primeiro número" << "\n";
    cin >> n1;
    cout << "Digite o segundo número " << "\n";
    cin >> n2;
    
    cout << "Números pares no intervalo de: " << n1 << " a " << n2 << "\n";
    
    for (int numeros = n1; numeros <= n2; numeros++) {
        if (numeros % 2 == 0) {
        cout << numeros << "\n";
        }
        }
    cout << "Fim da listagem." << "\n";
    return 0;
}