#include <iostream>

using namespace std;
/*
Leia Num1, Num2
Media <- (Num1 + Num2)/2 
Escreva Media
*/

float Num1, Num2, Media;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	//Entrada
	cout << "Forneça o primeiro número: ";
	cin >> Num1;
	
	cout << "Forneça o segundo número: ";
	cin >> Num2;
	
	//Processamento
	Media = (Num1 + Num2)/2; 
	
	//Saída
	cout << "A média é: " << Media << endl;
	
	system("pause");
	
	return 0;
}

