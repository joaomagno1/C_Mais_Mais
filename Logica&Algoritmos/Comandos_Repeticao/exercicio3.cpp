#include<iostream>
using namespace std;
/*
Leia AnoNasc, AnoAtual, Idade
Idade = AnoAtual - AnoNasc
Escreva Idade
*/

int main()
{
    int AnoAtual, AnoNasc, Idade;
    
    //Entrada
    cout << "Calcular Idade" << "\n";
    cout << "Insira o ano atual" << "\n";
    cin >> AnoAtual;
    
    cout << "Insira o ano em que você nasceu" << "\n";
    cin >> AnoNasc;
   
    //Procedimentos 
    Idade = AnoAtual - AnoNasc;
    
    //Saída
    cout << "Sua idade é: " << Idade <<  "\n";
    
         return 0;
}