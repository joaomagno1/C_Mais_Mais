#include<iostream>
using namespace std;
/*
Leia PesoKg, PesoG
PesoG = PesoKg * 1000
Escreva PesoG
*/

int main()
{
    float PesoKg, PesoG;
    
    //Entrada
    cout << "Calcular peso em Kg para peso em gramas" << "\n";
    cout << "Insira seu peso em Kg" << "\n";
    cin >> PesoKg;
    
    //Procedimentos 
    PesoG = PesoKg * 1000;
    
    //Saída
    cout << "Seu peso em gramas é: " << PesoG << "\n";
    
         return 0;
}