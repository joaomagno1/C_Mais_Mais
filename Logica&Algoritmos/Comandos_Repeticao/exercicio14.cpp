#include<iostream>
using namespace std;

int main()
{
    float TempC, TempF;
    
    //Entrada
    cout << "Converter temperatura em graus para fahrenheit" << "\n";
    cout << "Informe a Temperatura em graus" << "\n";
    cin >> TempC;
    
    //Procedimentos
    TempF = (1.8 * TempC) + 32;
    
    //Saída
    cout << "A temperatura convertida é de:" << TempF<< "F°" "\n";
    
         return 0;
}