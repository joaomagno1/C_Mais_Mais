#include<iostream>
using namespace std;

int main()
{
    float pi = 3.14f, Raio, Area;
    
    //Entrada
    cout << "Calcular area de um círculo" << "\n";
    cout << "Informe o raio do círculo" << endl;
    cin >> Raio;
    
    //Procedimentos
    Area = pi * (Raio*Raio);
    
    //Saída
    cout << "A area do círculo é: " << Area << "m²" "\n";
    
         return 0;
}