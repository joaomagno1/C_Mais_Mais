#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float Deposito, Taxa, Rend, ValorTotal;
    
    //Entrada
    cout << "Calcular redimento de seus depositos" << "\n";
    cout << "Informe seu deposito" << "\n";
    cin >>  Deposito;
    
    cout << "Informe a taxa de juros" << "\n";
    cin >> Taxa;
    //Procedimentos 
    Rend = Deposito * (Taxa/100);
    ValorTotal = Deposito + Rend;
    //Saída
    cout << fixed << setprecision(2);
    cout << "O total de rendimentos foi de: R$" << Rend << "\n";
    cout << "O valor total com os rendimentos são de: R$" << ValorTotal << "\n";
         return 0;
}