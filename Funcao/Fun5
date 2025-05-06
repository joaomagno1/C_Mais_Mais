#include <iostream>

using namespace std;

void NotaF(float media){
	cout << "Média: " << media << endl;
	
	cout << " Conceito: ";
	
	if (media < 5){
		cout << "D";
	} else {
		if (media < 7){
			cout << "C";
		} else {
			if (media < 9){
				cout << "B";
			} else {
				cout << "A";
			}
		}
	}
}

void CalcMedA(float n1, float n2){
	float media;
	media = (n1 + n2)/2;
	
	NotaF(media);
}

float nota1, nota2;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira a primeira nota: ";
	cin >> nota1;
	
	cout << "Insira a segunda nota: ";
	cin >> nota2;
	
	CalcMedA(nota1, nota2);
	
	return 0;
}