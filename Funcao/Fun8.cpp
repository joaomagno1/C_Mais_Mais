#include <iostream>

using namespace std;

float calcular(int opc, float num1, float num2){
	float selected;
	if (opc == 1){
		selected = num1 + num2;
	} else {
		if (opc == 2){
			selected = num1 - num2;
		} else {
			if (opc == 3){
				selected = num1 * num2;
			} else {
				selected = num1 / num2;
			}
		}
	}
	return selected;
}

int operacao;
float num1, num2;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Escolha uma opÃ§Ã£o:" << endl <<
	"1-Somar" << endl <<
	"2-Subtrair" << endl <<
	"3-Multiplicar" << endl <<
	"4-Dividir" << endl << endl;
	cin >> operacao;
	
	cout << endl << "Informe o primeiro nÃºmero: ";
	cin >> num1;
	
	cout << "Informe o segundo nÃºmero: ";
	cin >> num2;
	
	cout << endl << "Resultado: " << calcular(num1, num2, operacao);
	 
	return 0;
}