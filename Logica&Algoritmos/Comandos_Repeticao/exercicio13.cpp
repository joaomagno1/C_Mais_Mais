#include<iostream>
using namespace std;

int main()
{
    int Num;
    
    //Entrada
    cout << "Calcular Tabuada" << "\n";
    cout << "Insira um número" << "\n";
    cin >> Num;
    
    //Procedimentos
    cout << "Tabuada do número " << Num << ":" "\n";
    for (int i = 1; i <= 10; ++i ) {
    
    //Saída
        cout << Num << "X" << i << "=" << Num * i << "\n";
    }
    
         return 0;
}