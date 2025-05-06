#include <iostream>
#define TAM 3	

using namespace std;

struct Colmeia_Dados{
	int Codigo, NumAbelhas;
	string Regiao, Estado, Qualificacao;
};

void Colmeia(Colmeia_Dados Dados[TAM]){
	int Cont;
	
	for(Cont = 0; Cont < TAM; Cont++){
		cout << "Codigo da colmeia" << "\n";
		cin >> Dados[Cont].Codigo;
		cout << "Regiao da colmeia" << "\n";
		cin >> Dados[Cont].Regiao;
		cout << "Estado da colmeia" << "\n";
		cin >> Dados[Cont].Estado;
		cout << "Qualificação da colmeia (Forte, Médio e Fraco)" << "\n";
		cin >> Dados[Cont].Qualificacao;
		cout << "Número de abelhas da colmeia" << "\n";
		cin >> Dados[Cont].NumAbelhas;
	}
}

void MostrarColmeia(Colmeia_Dados Dados[TAM],const string FiltroQ){
	int Cont;
	bool encontrou = false;
	
	cout << "Colmeias com qualificação selecionada: " << FiltroQ << "\n";
	for(Cont = 0; Cont < TAM; Cont++){
		if(Dados[Cont].Qualificacao == FiltroQ){
			cout << "Codigo da colmeia" << Dados[Cont].Codigo << "\n";
			cout << "Região da colmeia" << Dados[Cont].Regiao << "\n";
			cout << "Estado da colmeia" << Dados[Cont].Estado << "\n";
			encontrou = true;
		}
	}
}
	
int Codigo[TAM], NumAbelhas[TAM];
string Regiao[TAM], Estado[TAM], Qualificacao[TAM];
Colmeia_Dados Dados[TAM];
int main () {
	
	setlocale (LC_ALL,"Portuguese");
	
	Colmeia(Dados);
	
	string FiltroQ;	
	cout << "Escolha a qualificação da colmeia a ser mostrada: (Forte, Medio e Fraco" << "\n";
	cin >> FiltroQ;
	
	MostrarColmeia(Dados, FiltroQ);
	
	return 0;
}