#include<iostream>
using namespace std;

int main()
{
    float HorasT, SalarioHr, Salario;
    
    //Entrada
    cout << "Calcular salário por horas trabalhadas" << "\n";
    cout << "Informe suas horas trabalhadas" << "\n";
    cin >> HorasT;
    
    cout << "Informe seu salário por hora" << "\n";
    cin >> SalarioHr;
    //Procedimentos 
    Salario = SalarioHr * HorasT;
    
    //Saída
    cout << "Seu salário é de: R$" << Salario << "\n";
         return 0;
}