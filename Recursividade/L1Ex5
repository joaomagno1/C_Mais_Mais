#include <iostream>
#include <stdlib.h>

using namespace std;

int lerN(){
	int N;
	cout << "Informe o tamanho do vetor (>= 2): ";
	cin >> N;
	
	if(N < 0){
		cout << "Valor inválido." << "\n";
		return lerN();
	}
	return N;
}

void lerVetor(int* V, int cont, int N){
	if(cont == N)return;
	
	cout << "Digite o valor do vetor (>= 2): ";
	cin >> V[cont];
	
	if(V[cont] < 2){
		cout << "Valor inválido." << "\n";
		return lerVetor(V, cont, N);
	}
	
	lerVetor(V, cont + 1, N);
}

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	int N = lerN();
	
	int* V = new int[N];
	
	lerVetor(V, 0, N);
	
	cout << "\n" << "Vetor digitado: 0";
	for(int cont = 0; cont < N; cont++){
		cout << V[cont] << " ";
	}
	cout << "\n";
	
	delete[] V;
	
	return 0;
}