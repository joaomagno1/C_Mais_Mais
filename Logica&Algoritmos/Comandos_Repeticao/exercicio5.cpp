#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float Nota1, Nota2, Nota3, Peso1, Peso2, Peso3, MediaPond;
    //Entrada
    cout << "Calculadora de Média Ponderada" << "\n";
    cout << "Informe a Nota 1" << "\n";
    cin >> Nota1;
    cout << "Informe o peso da primeira nota" << "\n";
    cin >> Peso1;
    
    cout << "Informe a Nota 2" << "\n";
    cin >> Nota2;
    cout << "Informe o peso da segunda nota" << "\n";
    cin >> Peso2;
    
    cout << "Informe a Nota 3" << "\n";
    cin >> Nota3;
    cout << "Informe o peso da terceira nota" << "\n";
    cin >> Peso3;
    
    //Procedimentos 
    MediaPond = (Nota1 * Peso1 + Nota2 * Peso2 + Nota3 * Peso3) / (Peso1 + Peso2 + Peso3);
    
    //Saída
    cout << setprecision(2);
    cout << "Sua média é: " << MediaPond << "\n";
    
         return 0;
}