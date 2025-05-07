#include <iostream>
#include <stdlib.h>

using namespace std;

int* retornaVetor(int n){
	if(n <= 0){
		return NULL;
	}
	
	int* num = new int[n]; //aloca um vetor na memoria dinâmica
	return num;
}

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	int n = 10; //tamanho do vetor
	
	int* vetor = retornaVetor(n);
	
	if(vetor != NULL){
		for(int cont = 0; cont < n; cont++){
			vetor[cont] = cont + 1;
			cout << vetor[cont] << " ";
		}
		cout << "\n";
		
		delete[] vetor;
	}
	else{
		cout << "A alocação de mémoria falhou." << "\n";
	}
		
	return 0;
}