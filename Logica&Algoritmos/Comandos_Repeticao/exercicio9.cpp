#include<iostream>
using namespace std;

int main()
{
    float BaseT, AlturaT, AreaT;
    
    //Entrada
    cout << "Calcular area de um triângulo" << "\n";
    cout << "Insira o valor da base do triângulo" << "\n";
    cin >> BaseT;
    
    cout << "Insira a altura do triângulo" << "\n";
    cin >> AlturaT;
    
    //Procedimentos
    AreaT = (BaseT * AlturaT) / 2;
    
    //Saída
    cout << "A area do triangulo é de: " << AreaT << "\n";
    
         return 0;
}