#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float CustoTeatro, Pconvite, Vendas;
    
    //Entrada
    cout << "Calcular convites a ser vendidos" << "\n";
    cout << "Informe o orçamento gasto com o evento" << "\n";
    cin >> CustoTeatro;
    
    cout << "Informe o preço do convite" << "\n";
    cin >> Pconvite;
    
    //Procedimentos
    Vendas = CustoTeatro / Pconvite;
    
    //Saída
    cout << fixed <<setprecision(0);
    cout << "O número total de convites a ser vendidos são de:" << Vendas<< "\n";
         return 0;
}