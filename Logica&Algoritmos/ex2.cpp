#include <iostream>
using namespace std;

int main() {
    int capacidade, p1, p2, p3, p4, p5;

    cout << "Digite a capacidade do elevador: ";  
    cin >> capacidade;

    cout << "Digite o peso da primeira pessoa: ";  
    cin >> p1; 

    cout << "Digite o peso da segunda pessoa: ";  
    cin >> p2;  

    cout << "Digite o peso da terceira pessoa: ";  
    cin >> p3;  

    cout << "Digite o peso da quarta pessoa: ";  
    cin >> p4;  

    cout << "Digite o peso da quinta pessoa: ";  
    cin >> p5;  

    int totalPeso = p1 + p2 + p3 + p4 + p5;

    if (totalPeso <= capacidade) {
        cout << "Elevador liberado para subir." << endl;
    }

    else {
        cout << "Excedeu a carga máxima!" << endl;
    }

    return 0;
}

