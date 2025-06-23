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
		Inserir(L, 2);
		Inserir(L, 4);
		Inserir(L, 8);
		Inserir(L, 5);		
		Inserir(L, 16);
		Inserir(L, 13);
		Inserir(L, 103);
		Inserir(L, 22);
		Inserir(L, 11);
    }    
}

void Swap(Lista *L, int Origem, int Destino){
	Elemento Aux;
	
	Aux = L->Dados[Destino];
	L->Dados[Destino] = L->Dados[Origem];
	L->Dados[Origem] = Aux;	
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
	
	Tempo = clock() - Tempo;//tempo decorrido!!
	cout << endl <<"Vetor ordenado:"<<endl;
	Imprimir(&L);
	cout << endl << endl << "Tempo de Ordenação: " << ((double) Tempo)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";
	
	return 0;
}
