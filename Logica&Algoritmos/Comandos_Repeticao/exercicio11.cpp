#include<iostream>
using namespace std;

int main()
{
    float Num, Quadrado, Cubo;
    
    //Entrada
    cout << "Calcular número ao cubo e Quadrado" << "\n";
    cout << "Informe o número" << "\n";
    cin >> Num;
    
    //Procedimentos
    Quadrado = Num * Num;
    Cubo = (Num * Num * Num);
    
    //Saída
    cout << "O número informado elevado ao quadrado é: " << Quadrado << "\n";
    cout << "O número informado elevado ao cubo é: " << Cubo << "\n";
    
         return 0;
}