#include <iostream>
#define TAM 3

using namespace std;

struct Cadastrar_Cad{
	string Nome, Naturalidade, Estado;
	int NumInsc;
	float Peso, Altura;
};

void Cadastrar(Cadastrar_Cad Cad[TAM]){
	int Cont;
	
	for (Cont = 0; Cont < TAM; Cont++){
		cout << "Número da inscrição" << "\n";
		cin >> Cad[Cont].NumInsc;
		cout << "Nome" << "\n";
		cin >> Cad[Cont].Nome;
		cout << "Altura" << "\n";
		cin >> Cad[Cont].Altura;
		cout << "Peso" << "\n";
		cin >> Cad[Cont].Peso;
		cout << "Naturalidade" << "\n";
		cin >> Cad[Cont].Naturalidade;
		cout << "Estado" << "\n";
		cin >> Cad[Cont].Estado;
	}
}

void Imprimir(Cadastrar_Cad Cad[TAM]){
	int Cont;
	cout << "Candidatas com altura maior que 1.85 e do estado de São Paulo" << "\n";
	for (Cont = 0; Cont < TAM; Cont++){
		if (Cad[Cont].Altura > 1.85 && Cad[Cont].Estado == "SP"){
			cout << Cad[Cont].Nome << "\n";
	}
}

}
string Nome[TAM], Naturalidade[TAM], Estado[TAM];
int NumInsc[TAM], Cont;
float Peso[TAM], Altura[TAM];
Cadastrar_Cad Cad[TAM];
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	Cadastrar(Cad);
	cout << "\n";
	Imprimir(Cad);
	
	return 0;
}