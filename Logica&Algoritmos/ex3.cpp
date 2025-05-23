#include <iostream>
using namespace std;

int main() {
    float salarioBruto, salarioLiquido, descontoINSS, auxilioPassagem = 40.00, auxilioRefeicao = 100.00;
    int dependentes;

    cout << "Digite o salário bruto: ";  
    cin >> salarioBruto;

    cout << "Digite o número de dependentes: ";  
    cin >> dependentes;

    if (salarioBruto <= 670) {
        descontoINSS = salarioBruto * 0.08;
    }
    if (salarioBruto > 670 && salarioBruto <= 1500) {
        descontoINSS = salarioBruto * 0.09;
    }
    if (salarioBruto > 1500 && salarioBruto <= 3500) {
        descontoINSS = salarioBruto * 0.10;
    }
    if (salarioBruto > 3500) {
        descontoINSS = salarioBruto * 0.11;
    }

    salarioLiquido = salarioBruto - descontoINSS + (15.00 * dependentes) + auxilioPassagem + auxilioRefeicao;

    cout << "Salário líquido: R$ " << salarioLiquido << endl;

    return 0;
}
