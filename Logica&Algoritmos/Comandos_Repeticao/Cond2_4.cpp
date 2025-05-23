#include<iostream>
using namespace std;

int Mes;
int main()
{
    cout << "Informe o Mês" << "\N";
    cin >> Mes;
    
    if(Mes == 1 || 3 || 5 || 7 || 8 || 10 || 12) {
    cout << "O mês tem 31 dias." << "\n";
    }
    else {
    if(Mes == 4 || 6 || 9 || 11) {
    cout << "O mês tem 30 dias" << "\n";
    }
    else {
    cout << "O mês tem 28 dias." << "\n";
    }
    }
    return 0;
}