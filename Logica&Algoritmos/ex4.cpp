#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Digite a nota quantitativa (0 a 10): ";
    cin >> nota;

    
    if (nota >= 0 ) {

        if (nota < 2) {
            cout << "Sem rendimento" << endl;
        }
        if (nota >= 2 && nota < 4) {
            cout << "Rendimento baixo" << endl;
        }
        if (nota >= 4 && nota < 6) {
            cout << "Rendimento regular" << endl;
        }
        if (nota >= 6 && nota < 8.5) {
            cout << "Bom rendimento" << endl;
        }
        if (nota >= 8.5 && nota <= 10) {
            cout << "Excelente" << endl;
        }
    }
    else {
        cout << "Nota inválida" << endl;
    }

    return 0;
}
