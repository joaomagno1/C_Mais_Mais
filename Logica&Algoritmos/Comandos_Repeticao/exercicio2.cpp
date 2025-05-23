#include<iostream>
using namespace std;
/*
Leia Base, Altura, Area
Area = Base * Altura
Escreva Area
*/

int main()
{
    float Base, Altura, Area;
    
    //Entrada
    cout << "Calcular Area de um retângulo" << "\n";
    cout << "Insira a base do retângulo" << "\n";
    cin >> Base;
    
    cout << "Insira a altura do retângulo" << "\n";
    cin >> Altura;
    
    //Procedimentos
    Area = Base * Altura;
    
    //Saída
    cout << "A área do retangulo é: " << Area << "\n";
    
         return 0;
}