#include <iostream>
using namespace std;

int main() {
    int idade, sexo;  

    cout << "Digite a idade do funcionário: ";
    cin >> idade;

    cout << "Digite o sexo do funcionário (1 para homem, 2 para mulher): ";
    cin >> sexo;

    if (sexo == 1) 
        if (idade > 65) {
            cout << "Funcionário pode se aposentar." << endl;
        } else {
            cout << "Funcionário não pode se aposentar." << endl;
        }
    }

    if (sexo == 2) {  r
        if (idade > 60) {
            cout << "Funcionário pode se aposentar." << endl;
        } else {
            cout << "Funcionário não pode se aposentar." << endl;
        }
    }

    return 0;
}
