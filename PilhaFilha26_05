#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 100

struct Produto{
	int Codigo;
	string Descricao;
	int Qtde;
	float Preco;
};

struct Pilha{
	Produto Prod[MAX];
	int Topo;
	int Qtde_Total;
	float Valor_Total;
};

struct Fila{
	Produto Prod[MAX];
	int Inicio;
	int Fim;
	int Qtde_Total;
	float Valor_Total;
};

void Ini_Pilha(Pilha *P){
	P->Topo = -1;
	P->Qtde_Total = 0;
	P->Valor_Total = 0;
}

void Ini_Fila(Fila *F){
	F->Inicio = -1;
	F->Fim = -1;
	F->Qtde_Total = 0;
	F->Valor_Total = 0;
}

int Pilha_Vazia(Pilha *P){
	
	return (P->Topo == -1);
}

int Fila_Vazia(Fila *F){
	
	return (F->Inicio == -1);
}

int Pilha_Cheia(Pilha *P){
	
	return (P->Topo+1 == MAX);
}

int Fila_Cheia(Fila *F){
	
	return (F->Fim+1 == MAX);
}

int Tamanho_Pilha(Pilha *P){
	
	return P->Topo+1;
}

int Tamanho_Fila(Fila *F){
	
	return F->Fim+1;
}

void Push(Pilha *P, int Cod, string Desc, int Qtde, float Prc){

	if (!Pilha_Cheia(P)){		
		P->Prod[P->Topo + 1].Codigo = Cod;
		P->Prod[P->Topo + 1].Descricao = Desc;
		P->Prod[Tamanho_Pilha(P)].Qtde = Qtde;
		P->Prod[Tamanho_Pilha(P)].Preco = Prc;
		
		P->Topo++;
		P->Qtde_Total += Qtde;
		P->Valor_Total += Prc;			
	}
	else{
		cout << "Pilha cheia!" << endl;
	}
}

void Enqueue(Fila *F, int Cod, string Desc, int Qtde, float Prc){

	if (!Fila_Cheia(F)){	
		F->Prod[F->Fim + 1].Codigo = Cod;
		F->Prod[F->Fim + 1].Descricao = Desc;
		F->Prod[F->Fim + 1].Qtde = Qtde;
		F->Prod[F->Fim + 1].Preco = Prc;
		
		if (Fila_Vazia(F)){
			F->Inicio++;	
		}
		
		F->Fim++;
		
		F->Qtde_Total += Qtde;
		F->Valor_Total += Prc;			
	}
	else{
		cout << "Fila cheia!" << endl;
	}	
}

int Pop(Pilha *P){
	int Pos=-1;
	if (!Pilha_Vazia(P)){			
		Pos = P->Topo;
		P->Qtde_Total -=P->Prod[P->Topo].Qtde;
		P->Valor_Total -= P->Prod[P->Topo].Preco;	
		P->Topo--;				
	}
	else{
		cout << endl << "Pilha vazia!!!"<< endl;
	}
	
	return Pos;
}

void Desloc_Esq(Fila *F, int Ini, int Fim){
	int Cont;
	
	for(Cont = Ini; Cont <= Fim-1; Cont++){
		F->Prod[Cont] = F->Prod[Cont+1];
	}
}

Produto * Dequeue(Fila *F){
	Produto *Item = NULL;
	if (!Fila_Vazia(F)){
		Item = new Produto;		
		*Item = F->Prod[F->Inicio];
		F->Qtde_Total -= F->Prod[F->Inicio].Qtde;
		F->Valor_Total -= F->Prod[F->Inicio].Preco;	
		Desloc_Esq(F, F->Inicio, F->Fim);
		F->Fim--;	
		
	}
	else{
		cout << endl << "Fila vazia!!!"<< endl;
	}
	
	return Item;
}

void ImprimirRecFila(Fila *F, int Pos){

	if (Pos<=F->Fim){
		cout << endl << "C?digo: " << F->Prod[Pos].Codigo;
		cout << endl << "Descri??o: "<< F->Prod[Pos].Descricao;
		cout << endl << "Quantidade: "<< F->Prod[Pos].Qtde;
		cout << endl << "Pre?o: "<< F->Prod[Pos].Preco;
		cout << endl;
		ImprimirRecFila(F, Pos+1);
	}	
}

void Imprimir_Fila(Fila *F){
	int Cont;
	
	for(Cont=F->Inicio;Cont<=F->Fim;Cont++){
		cout << endl << "C?digo: " << F->Prod[Cont].Codigo;
		cout << endl << "Descri??o: "<< F->Prod[Cont].Descricao;
		cout << endl << "Quantidade: "<< F->Prod[Cont].Qtde;
		cout << endl << "Pre?o: "<< F->Prod[Cont].Preco;
		cout << endl << "--------------------------------------" << endl;
		cout << endl;
	}	
}

void Imprimir_Pilha(Pilha *P){
	int Cont;
	
	for(Cont=P->Topo;Cont>=0;Cont--){
		cout << endl << "C?digo: " << P->Prod[Cont].Codigo;
		cout << endl << "Descrição: "<< P->Prod[Cont].Descricao;
		cout << endl << "Quantidade: "<< P->Prod[Cont].Qtde;
		cout << endl << "Preço: "<< P->Prod[Cont].Preco;
		cout << endl << "--------------------------------------" << endl;
		cout << endl;
	}	
}

void ImprimirRec(Pilha *P, int Pos){

	if (Pos>=0){
		cout << endl << "C?digo: " << P->Prod[Pos].Codigo;
		cout << endl << "Descri??o: "<< P->Prod[Pos].Descricao;
		cout << endl << "Quantidade: "<< P->Prod[Pos].Qtde;
		cout << endl << "Pre?o: "<< P->Prod[Pos].Preco;
		cout << endl;
		ImprimirRec(P, Pos-1);
	}	
}

Pilha P;
Fila F;
int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	Ini_Pilha(&P);
	Ini_Fila(&F);
	
	Push(&P, 10, "Sabão", 10, 1.00);
	Push(&P, 5, "Sabonete", 5, 1.50);
	Push(&P, 1, "Álcool em gel", 20, 0.50);
	Push(&P, 100, "Sucrilhos", 1, 100.00);
	Push(&P, 100, "Sucrilhos", 1, 100.00);
	Imprimir_Pilha(&P);
	
	system("pause");
	
	Enqueue(&F, 10, "Sabão", 10, 1.00);
	Enqueue(&F, 5, "Sabonete", 5, 1.50);
	Enqueue(&F, 1, "Álcool em gel", 20, 0.50);
	Enqueue(&F, 100, "Sucrilhos", 1, 100.00);
	Enqueue(&F, 100, "Sucrilhos", 1, 100.00);
	Imprimir_Fila(&F);
	
	Pop(&P);
	Dequeue(&F);
	Pop(&P);
	Dequeue(&F);
	
	system("pause");
	
	cout << "Teste" << "\n";
	Imprimir_Fila(&F);
	Imprimir_Pilha(&P);
	
	system("pause");
	
	return 0;
}
