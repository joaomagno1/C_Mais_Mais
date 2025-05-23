#include <iostream>
using namespace std;

/*
Leia Num1, Num2, Sub
Sub <- Num1 - Num2
Escreva Sub
*/

int main()
{
    float Num1, Num2, Sub;
    
    //Entrada
    cout << "Insira o primeiro número" << "\n";
    cin >> Num1;
    
    cout << "Insira o segundo número" << "\n";
    cin >> Num2;
    //Processamento
    Sub = Num1 - Num2;
    
    //Saída
    cout << "A subtração dos dois números é: " << Sub << "\n";

    return 0;
}