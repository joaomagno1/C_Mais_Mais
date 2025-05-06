#include <iostream>

using namespace std;

void menu(){
	int operacao;
	cout << "Escolha uma opÃ§Ã£o:" << endl <<
	"1-Soma" << endl <<
	"2-SubtraÃ§Ã£o" << endl <<
	"3-MultiplicaÃ§Ã£o" << endl <<
	"4-DivisÃ£o" << endl << endl;
	cin >> operacao;
}


float somar(float n1, float n2){
	float x;
	x = n1 + n2;
	
	return x;
}

float subtrair(float n1, float n2){
	float x;
	x = n1 - n2;
	
	return x;
}

float multiplicar(float n1, float n2){
	float x;
	x = n1 * n2;
	
	return x;
}

float dividir(float n1, float n2){
	float x;
	x = n1 / n2;
	
	return x;
}

float num1, num2;
int op;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	op = menu();
	
	cout << endl << "Informe o primeiro nÃºmero: ";
	cin >> num1;
	
	cout << "Informe o segundo nÃºmero: ";
	cin >> num2;
	
	if (op == 1){
		cout << "OpÃ§Ã£o: " << op << " Resultado: " << somar(num1, num2);
	} else {
		if (op == 2){
			cout << "OpÃ§Ã£o: " << op << " Resultado: " << subtrair(num1, num2);
		} else {
			if (op == 3){
				cout << "OpÃ§Ã£o: " << op << " Resultado: " << multiplicar(num1, num2);
			} else {
				cout << "OpÃ§Ã£o: " << op << " Resultado: " << dividir(num1, num2);
			}
		}
	}
	return 0;
}