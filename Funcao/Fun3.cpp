#include <iostream>

using namespace std;

float NiverDias(int ano, int mes, int dia){
	int ad, md, Idade;
	ad = ano * 360;
	md = mes * 30;
	Idade = ad + md + dia;
	
	return Idade;
}

int ano, mes, dia;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o ano de nascimento: ";
	cin >> ano;
	
	cout << "Insira o mês: ";
	cin >> mes;
	
	cout << "O dia: ";
	cin >> dia;
	
	cout << endl << NiverDias(ano, mes, dia) << " dias de idade.";
	
	return 0;
}