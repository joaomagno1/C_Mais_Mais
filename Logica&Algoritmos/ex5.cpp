#include <iostream>
using namespace std;

int main() {
    int numeroVendedor;
    float salarioFixo, totalVendas, salarioTotal, comissao;

    cout << "Digite o número do vendedor: ";
    cin >> numeroVendedor;

    cout << "Digite o salário fixo: ";
    cin >> salarioFixo;

    cout << "Digite o total de vendas: ";
    cin >> totalVendas;

    comissao = 0; 

    if (totalVendas <= 1000) {
        comissao = totalVendas * 0.05;  
    }
    if (totalVendas > 1000 && totalVendas <= 5000) {
        comissao = (1000 * 0.05) + ((totalVendas - 1000) * 0.10);  
    }
    if (totalVendas > 5000) {
        comissao = (1000 * 0.05) + (4000 * 0.10) + ((totalVendas - 5000) * 0.15);  
    }

    salarioTotal = salarioFixo + comissao;

    cout << "Número do vendedor: " << numeroVendedor << endl;
    cout << "Total de vendas: R$ " << totalVendas << endl;
    cout << "Salário fixo: R$ " << salarioFixo << endl;
    cout << "Salário total: R$ " << salarioTotal << endl;

    return 0;
}
