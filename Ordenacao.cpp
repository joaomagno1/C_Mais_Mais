#include <iostream>
#include <stdlib.h>
#include <time.h>

#define MAX 10

using namespace std;

struct Elemento{
	int Chave;
	int Ordem;
};

struct Lista{ //cabecalho
	Elemento Dados[MAX];	
	int Tamanho;
};

void Ini_Lista(Lista *L){
	
	L->Tamanho = 0;
}

bool Vazia(Lista *L){
	return L->Tamanho == 0;
}

bool Cheia(Lista *L){
	return L->Tamanho == MAX;
}

void Imprimir(Lista *L){
	int Cont;
	
	for(Cont=0;Cont< L->Tamanho && MAX <= 100;Cont++){
		cout << L->Dados[Cont].Chave;
		cout << "(" << L->Dados[Cont].Ordem << "),";
	}
}

void Desloca_Esquerda(Lista *L, int Inicio, int Fim){
	int Cont;
	
	for(Cont=Inicio;Cont<Fim;Cont++){
		L->Dados[Cont] = L->Dados[Cont+1];
	}
}

void Inserir(Lista *L, int Chave){
	int Pos;

	if (!Cheia(L)) {		
		Pos = L->Tamanho;
		//Insere o elemento
		L->Dados[Pos].Chave = Chave;
		L->Dados[Pos].Ordem = Pos;		
		
		L->Tamanho++;			
	}
	else{
		cout << endl << "A lista est? cheia!!!";
	}
}

void CarregaLista(Lista *L){
    int Cont, Nro;
    
    if (MAX > 10){ //Gera os dados automaticamente
        for(Cont=0;Cont<MAX;Cont++){
        	Nro = rand()%100;
        	Inserir(L, Nro);
        }        
    }
    else{
		Inserir(L, 7);
		Inserir(L, 12);
		Inserir(L, 7);
		Inserir(L, 8);
		Inserir(L, 5);		
		Inserir(L, -16);
		Inserir(L, 2);
		Inserir(L, 103);
		Inserir(L, 22);
		Inserir(L, 103);
    }    
}

void Swap(Lista *L, int Origem, int Destino){
	Elemento Aux;
	
	Aux = L->Dados[Destino];
	L->Dados[Destino] = L->Dados[Origem];
	L->Dados[Origem] = Aux;	
}

void SelectionSort(Lista *L, int Inicio, int Fim){
	int I, J, Min;
	
	for (I = Inicio; I <= Fim; I++){
		Min = I;
		
		for(J = I+1; J <= Fim; J++){
			if (L->Dados[J].Chave < L->Dados[Min].Chave){
				Min = J;
			}
		}
		
		Swap(L, I, Min);		
	}		
}

void SelectionSortRecursivo(Lista *L, int Inicio, int Fim){
	int J, Min;
	
	//for (I = Inicio; I <= Fim; I++){
	if(Inicio <= Fim){
		Min = Inicio;
		
		for(J = Inicio+1; J <= Fim; J++){
			if (L->Dados[J].Chave < L->Dados[Min].Chave){
				Min = J;
			}
		}
		
		Swap(L, Inicio, Min);
		SelectionSortRecursivo(L, Inicio + 1, Fim); //recursão
	}
}

void InsertionSort(Lista *L, int Inicio, int Fim){
	int I, J;
	
	for (I = Inicio+1; I <= Fim; I++){
		J = I;
		
		while(J>0 && L->Dados[J].Chave < L->Dados[J-1].Chave){
			Swap(L, J, J-1);
			J--;
		}
	}	
}

void BubbleSort(Lista *L, int Inicio, int Fim){
	int I, J;	
	bool Swapped = false;
	
	I=0;	
	do{
		Swapped = false;
		for (J=Fim;J>I;J--){
			if (L->Dados[J].Chave < L->Dados[J-1].Chave){
				Swap(L, J, J-1);
				Swapped = true;
			}
		}
		
		I++; 
	} while(Swapped && I <= Fim);
}

Lista L;
clock_t Tempo;
int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	Ini_Lista(&L);	
	
	CarregaLista(&L);

	cout << "Vetor não ordenado:"<<endl;
	Imprimir(&L);
	
	Tempo = clock();
	
	//exec das ordenações
	
	//SelectionSort(&L, 0, MAX-1);
	
	//InsertionSort(&L, 0, MAX-1);
	
	//BubbleSort(&L, 0, MAX-1);
	
	SelectionSortRecursivo(&L, 0, MAX-1);
	
	Tempo = clock() - Tempo;//tempo decorrido!!
	cout << endl <<"Vetor ordenado:"<<endl;
	Imprimir(&L);
	cout << endl << endl << "Tempo de Ordenação: " << ((double) Tempo)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";
	
	return 0;
}
