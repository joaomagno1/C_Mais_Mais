#include <iostream>
#include <stdlib.h>

using namespace std;

struct Item { //lista
	int Elemento;
	Item *Prox;
};

struct Lista { //cabeçalho da lista
	Item *Inicio;
};

Item *CriarLista(int Valor){ //cria a lista
	Item *L = (Item*) malloc(sizeof(Item));
	L->Elemento = Valor;
	L->Prox = NULL;
	
	return L;
}

void InserirInicio(Lista *Listas, int Valor){
	Item *L = CriarLista(Valor);
	L->Prox = Listas->Inicio;
	Listas->Inicio = L;
}

void ImprimirLista(Lista *Listas){
	Item* Atual = Listas->Inicio;
	while (Atual != NULL){
		cout << Atual->Elemento << " -> ";
		Atual = Atual->Prox;
	}
	cout << "NULL" << "\n";
}

void RemoverItem(Lista *Listas, int Valor){
	if (Listas->Inicio != NULL){
		Item *Atual = Listas->Inicio;
		Item *Anterior = NULL;
		
		while (Atual != NULL && Atual->Elemento != Valor){
			Anterior = Atual;
			Atual = Atual->Prox;
		}
		
		if (Atual != NULL){
			if(Anterior == NULL){
				Listas->Inicio = Atual->Prox;
			}
			else {
				Anterior->Prox = Atual->Prox;
			}
			delete Atual;
		}
	}
}

int ComprimentoLista(Lista *Listas){
	int Cont = 0;
	Item *Atual = Listas->Inicio;
	
	while(Atual != NULL){
		Cont++;
		Atual = Atual->Prox;
	}
	return Cont;
}

int ContarOcorrencias(Lista *Listas, int N){
	int Cont = 0;
	Item *Atual = Listas->Inicio;
	
	while(Atual != NULL){
		if(Atual->Elemento == N){
			Cont++;
		}
		Atual = Atual->Prox;
	}
	return Cont;
}

void SubstituirOcorrencias(Item *Atual, int Original, int Novo){
	if(Atual != NULL){
		if(Atual->Elemento == Original){
			Atual->Elemento = Novo;
		}
		SubstituirOcorrencias(Atual->Prox, Original, Novo);
	}
}

void InserirNoFim(Lista *L, int Valor){
	Item *Novo = CriarLista(Valor);
	if(L->Inicio == NULL){
		L->Inicio = Novo;
	}
	else{
		Item *Atual = L->Inicio;
		while(Atual->Prox != NULL){
			Atual = Atual->Prox;
		}
		Atual->Prox = Novo;
	}
}

void DividirLista(Lista *Original, int N, Lista *ListaMaior, Lista *ListaMenor){
	Item *Atual = Original->Inicio;
	
	while(Atual != NULL){
		if(Atual->Elemento > N){
			InserirNoFim(ListaMaior, Atual->Elemento);
		}
		if(Atual->Elemento < N){
			InserirNoFim(ListaMenor, Atual->Elemento);
		}
		Atual = Atual->Prox;
	}
}

int ExisteNaLista(Lista *L, int Valor){
	Item *Atual = L->Inicio;
	while(Atual != NULL){
		if(Atual->Elemento == Valor){
			return 1; //Se verdadeiro
		}
		Atual = Atual->Prox;
	}
	return 0; // Se falso
}

void IntersecaoListas(Lista *L1, Lista *L2, Lista *Intersecao){
	Item *Atual = L1->Inicio;
	while(Atual != NULL){
		if(ExisteNaLista(L2, Atual->Elemento) == 1){
			InserirNoFim(Intersecao, Atual->Elemento);
		}
		Atual = Atual->Prox;
	}
}

int Opc, Valor, ListaOPC, NovoValor;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	Lista Lista1, Lista2, ListaMenor, ListaMaior, ListaIntersecao;
	Lista1.Inicio = NULL;
	Lista2.Inicio = NULL;
	ListaMenor.Inicio = NULL;
	ListaMaior.Inicio = NULL;
	ListaIntersecao.Inicio = NULL;
	
    do{
		cout << "\n===========================MENU==============================\n";
	    cout << "1. Adicionar na Lista (Lista 1 ou 2)"<< "\n";
	    cout << "2. Excluir da Lista (Lista 1 ou 2)" << "\n";
	    cout << "3. Mostrar Listas" << "\n";
	    cout << "4. Calcular comprimento das listas" << "\n";
	    cout << "5. Contar Ocorrências na Lista (Lista 1 ou 2)" << "\n";
	    cout << "6. Substituição de ocorrências em uma lista (Lista 1 ou 2)" << "\n";
	    cout << "7. Dividir uma lista em duas (Lista 1 ou 2)" << "\n";
	    cout << "8. Interseção das listas" << "\n";
	    cout << "0. Sair" << "\n";
	    cout << "Opção: ";
	    cin >> Opc;
	
	    switch (Opc){
	        case 1:
	        	cout << "Inserir na 1 ou 2 lista?" << "\n";
	        	cin >> ListaOPC;
	        	if(ListaOPC == 1){
	        		cout << "Valor para a lista 1: " << "\n";
	        		cin >> Valor;
	        		InserirInicio(&Lista1, Valor);
				}
				else{
					cout << "Valor para a lista 2: " << "\n";
	        		cin >> Valor;
	        		InserirInicio(&Lista2, Valor);
				}
	            break;
	
	        case 2:
	        	cout << "Remover de qual lista? (lista 1 ou 2)" << "\n";
	        	cin >> ListaOPC;
	        	cout << "Valor a remover:" << "\n";
	        	cin >> Valor;
	        	if(ListaOPC == 1){
	        		RemoverItem(&Lista1, Valor);
				}
				if(ListaOPC == 2){
					RemoverItem(&Lista2, Valor);
				}
	        	break;
	        	
		
	        case 3:
	        	cout << "Lista 1: ";
	        	ImprimirLista(&Lista1);
	        	cout << "Lista 2: ";
	        	ImprimirLista(&Lista2);
	            break;
	
	        case 4:
	        	cout << "Comprimento da lista 1: " << ComprimentoLista(&Lista1) << "\n";
	        	cout << "Comprimento da lista 2: " << ComprimentoLista(&Lista2) << "\n";
	        	break;
	
	        case 5:
	        	cout << "Contar ocorrências em qual lista? (1 ou 2): " << "\n";
	        	cin >> ListaOPC;
	        	cout << "Valor a procurar: " << "\n";
	        	cin >> Valor;
	        	
	        	if(ListaOPC == 1){
	        		cout << "Números de nós que possuem " << Valor << "na lista 1:" << "\n";
	        		cout << ContarOcorrencias(&Lista1, Valor) << "\n";
				}
				
				if(ListaOPC == 2){
	        		cout << "Números de nós que possuem " << Valor << "na lista 2:" << "\n";
	        		cout << ContarOcorrencias(&Lista2, Valor) << "\n";
				}
	            break;
	
	        case 6:
	        	cout << "Substituir em qual lista? (1 ou 2): " << "\n";
	        	cin >> ListaOPC;
	        	cout << "Valor original: ";
			    cin >> Valor;
			    cout << "Novo valor: ";
			    cin >> NovoValor;
	        	
	        	if(ListaOPC == 1){
	        		SubstituirOcorrencias(Lista1.Inicio, Valor, NovoValor);
	        		cout << "Lista 1 atualizada: ";
	        		ImprimirLista(&Lista1);
				}
				if(ListaOPC == 2){
	        		SubstituirOcorrencias(Lista2.Inicio, Valor, NovoValor);
	        		cout << "Lista 2 atualizada: ";
	        		ImprimirLista(&Lista2);
				}
	            break;
	
	        case 7:
			    cout << "Dividir qual lista? (1 ou 2): ";
			    cin >> ListaOPC;
			    cout << "Digite o valor N para dividir: ";
			    cin >> Valor;
			    
			    if(ListaOPC == 1){
			    	DividirLista(&Lista1, Valor, &ListaMaior, &ListaMenor);
				}
				if(ListaOPC == 2){
			    	DividirLista(&Lista2, Valor, &ListaMaior, &ListaMenor);
				}
				
				cout << "Elementos -> " << Valor << ":";
				ImprimirLista(&ListaMaior);
				cout << "Elementos -> " << Valor << ":";
				ImprimirLista(&ListaMenor);
	            break;
	
	        case 8:
	        	IntersecaoListas(&Lista1, &Lista2, &ListaIntersecao);
	        	
	        	cout << "Elementos comuns entre Lista 1 e Lista 2:" << "\n";
    			ImprimirLista(&ListaIntersecao);
	            break;
	
	        case 0:
	            cout << "Saindo do programa..." << endl;
	            break;
	
	        default:
	            cout << "Opção inválida!" << endl;
	    	}
    }while (Opc != 0);
	
	return 0;
}
