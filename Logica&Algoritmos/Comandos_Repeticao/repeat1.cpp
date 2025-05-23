#include<iostream>
using namespace std;

int Soma, N1, N2;
char op;

int main()
{
    do {
        cout << "Calcular a soma de dois números" << "\n";
        cout << "Insira o primeiro número" << "\n";
        cin >> N1;
    
        cout << "Insira o segundo número" << "\n";
        cin >> N2;
    
        Soma = N1+ N2;
        cout << "A soma dos dois números é: " << Soma << "\n";
    
        cout << "Deseja realizar a soma de dois números novamente? (s/n)" << "\n";
        cin >> op;
    }
    while (op == 's' || op == 'S');
    cout << "Programa encerrado." << "\n";
    
    return 0;
}