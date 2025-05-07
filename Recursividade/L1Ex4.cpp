#include <iostream>
#include <stdlib.h>

using namespace std;

int* somaVetores(int* A, int* B, int N){
	if(N <= 0 || A == NULL || B == NULL){
		return NULL;
	}
	int* C = new int[N]; //alocação vetor [c]
	
	for(int cont = 0; cont < N; cont++){
		C[cont] = A[cont] + B[cont];
	}
	
	return C; 
}

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	int N = 10;
	
	int A[N] ={1, 2, 3, 4, 5};
	
	int B[N] ={10, 20, 30, 40, 50};
	
	int* C = somaVetores(A, B, N);
	
	if(C != NULL){
		cout << "Soma dos vetores A e B retornando para o vetor C" << "\n";
		for(int cont = 0; cont < N; cont ++){
			cout << C[cont] << " ";
		}
		cout << "\n";
		
		delete[] C;
	}
	else{
		cout << "Erro ao somar vetores." << "\n";
	}
	
	return 0;
}