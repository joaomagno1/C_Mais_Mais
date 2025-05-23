#include<iostream>
using namespace std;

int Num;
int main()
{
    cout << "Digite um número para iniciar a contagem" << "\n";
    cin >> Num;
    
    for (int Numeros = Num; Numeros <= 100; Numeros++){
        cout << Numeros << "\n";
    }
    cout << "Contagem concluída." << "\n";
    return 0;
}