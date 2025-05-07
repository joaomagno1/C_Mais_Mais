#include <iostream>

using namespace std;

void categoria(float idade){
	if (idade < 5){
		cout << "Sem categoria.";
	} else {
		if (idade < 8){
			cout << "Infantil A.";
		} else {
			if (idade < 11){
				cout << "Infantil B.";
			} else {
				if (idade < 14){
					cout << "Juvenil A.";
				} else {
					if (idade < 18){
						cout << "Juvenil B.";
					} else {
						cout << "Adulto.";
					}
				}
			}
		}
	}
}

float Valor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira a idade do nadador: ";
	cin >> Valor;
	cout << endl;
	
	categoria(Valor);
	
	return 0;
}