#include<iostream>
using namespace std;

int main()
{
    float Salario, Aumento;
    
    //Entrada
    cout << "Você recebeu um aumento de 25% do seu salário" << "\n";
    cout << "Informe o seu salário atual" << "\n";
    cin >> Salario;
    
    //Procedimentos 
    Aumento = (Salario / 4) + Salario;
    //Saída
    cout << "Seu novo salario com o aumento é de: R$" << Aumento << "\n";
         return 0;
}