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
		/*Inserir(L, 7);
		Inserir(L, 12);
		Inserir(L, 7);
		Inserir(L, 8);
		Inserir(L, 5);		
		Inserir(L, -16);
		Inserir(L, 2);
		Inserir(L, 103);
		Inserir(L, 22);
		Inserir(L, 103);*/
		Inserir(L, 4);
		Inserir(L, 2);
		Inserir(L, 8);
		Inserir(L, 6);
		Inserir(L, 0);		
		Inserir(L, 5);
		Inserir(L, 1);
		Inserir(L, 7);
		Inserir(L, 3);
		Inserir(L, 9);
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

void MergeSort(Lista* L, int Inicio, int Fim, int Debug){
    int Meio, Cont, ContA, ContB;
    Elemento* Aux;
    
    if (Inicio < Fim){
        Meio = (Inicio + Fim)/2;
        
        //Quebra em vetores menores (metade)
        if (Debug) {
        	cout << "\nMergeSort(" << Inicio << "," << Meio << ")\n";
        	system("pause");
		}  
        MergeSort(L, Inicio, Meio, Debug); //VetorA (Esq)
        if (Debug) {
        	cout << "\nMergeSort(" << Meio+1 << "," << Fim << ")\n";
        	system("pause");
		} 
        MergeSort(L, Meio+1, Fim, Debug); //VetorB (Dir)
        
        //Merge
        //Criação do vetor auxiliar
        //Junta as partes (merge), pegando sempre o menor elemento de cada parte
        //de forma ordenada
        Aux = (Elemento *) malloc(sizeof(Elemento) * (Fim - Inicio + 1));
        ContA = Inicio;
        ContB = Meio+1;
        Cont = 0;
        
      	if (Debug) {
        	cout << "\nInicio: " << Inicio << " Meio: " << Meio << " Fim: " << Fim;
        	cout << "\nContA:" << ContA;
        	cout << "\nContB:" << ContB;
        	cout << "\nCont:" << Cont << "\n";
        	system("pause");
		} 
        
        //Repete enquanto tiver subvetor a percorrer
        while (ContA <= Meio || ContB <= Fim){
        	if (ContA > Meio){ //final do VetorA
                Aux[Cont] = L->Dados[ContB];
                
                if (Debug) {
        			cout << "\nJá processou vetor esquerdo (A). Copiando vetor direito (B)";
        			cout << "\nContA:" << ContA;
        			cout << "\nContB:" << ContB;
        			cout << "\nCont:" << Cont << "\n";
        			system("pause");
				} 
                ContB++; 
        	}
        	else{
        		if (ContB > Fim){ //final do VetorB
        			Aux[Cont] = L->Dados[ContA];
        			
        			if (Debug) {
	        			cout << "\nJá processou vetor direito (B). Copiando vetor esquerdo (A)";
	        			cout << "\nContA:" << ContA;
	        			cout << "\nContB:" << ContB;
	        			cout << "\nCont:" << Cont << "\n";
	        			system("pause");
	       			}	
                	ContA++; 
        		}
        		else{
        			if (L->Dados[ContA].Chave < L->Dados[ContB].Chave){ //meio do VetorA 
        				Aux[Cont] = L->Dados[ContA];
        				
        				if (Debug) {
		        			cout << "\n1? item do vetor esquerdo (A) menor do que 1? item do vetor direito (B). Copiando item do vetor (A) para Aux.";
		        			cout << "\nContA:" << ContA;
		        			cout << "\nContB:" << ContB;
		        			cout << "\nCont:" << Cont << "\n";
		        			system("pause");
		       			}  
                		ContA++;	
        			}
        			else{ //meio do VetorB
        				Aux[Cont] = L->Dados[ContB];
        				
        				if (Debug) {
		        			cout << "\n1? item do vetor direito (B) menor ou igual do que 1? item do vetor esquerdo (A). Copiando item do vetor (B) para Aux.";
		        			cout << "\nContA:" << ContA;
		        			cout << "\nContB:" << ContB;
		        			cout << "\nCont:" << Cont << "\n";
		        			system("pause");
		       			}   
                		ContB++;
					}
				}
			}
        	Cont++;	
    	}
        
        //Copia o merge ordenado dos vetores para o vetor original    
        for(Cont=Inicio;Cont<=Fim;Cont++){
            L->Dados[Cont] = Aux[Cont - Inicio];   
			
			if (Debug) {
    			cout << "L["<<Cont<<"].Chave = Aux[" <<Cont - Inicio<<"] (" <<Aux[Cont - Inicio].Chave<<")" << "\n";
    			system("pause");				
   			}  			                                                             
        }    
        
        free(Aux);  
 	}
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
	//SelectionSortRecursivo(&L, 0, MAX-1);
	
	//InsertionSort(&L, 0, MAX-1);
	
	//BubbleSort(&L, 0, MAX-1);
	
	MergeSort(&L, 0, MAX-1, 0);
	
	Tempo = clock() - Tempo;//tempo decorrido!!
	cout << endl <<"Vetor ordenado:"<<endl;
	Imprimir(&L);
	cout << endl << endl << "Tempo de Ordenação: " << ((double) Tempo)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";
	
	return 0;
}
