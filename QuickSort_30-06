#include <iostream>
#include <time.h>

#define MAX 100
// Este ? um exemplo de programa em C++

using namespace std;

struct Elemento{
	int Chave;
	int Ordem;
};

struct Lista{
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
		cout << "(" << L->Dados[Cont].Ordem << "), ";
	}
}

void Desloca_Direita(Lista *L, int Inicio, int Fim){
	int Cont;
	
	for(Cont=Fim;Cont>=Inicio;Cont--){
		L->Dados[Cont+1] = L->Dados[Cont];
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

		Inserir(L,46);	
		Inserir(L,83);
		Inserir(L,73);
		Inserir(L,86);
		Inserir(L,8);
		Inserir(L,39);
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

void SelectionSortRec(Lista *L, int Inicio, int Fim){
	int J, Min;
	
	//for (I = Inicio; I <= Fim; I++)
	if (Inicio <= Fim){
		Min = Inicio;
		
		for(J = Inicio+1; J <= Fim; J++){
			if (L->Dados[J].Chave < L->Dados[Min].Chave){
				Min = J;
			}
		}
		
		Swap(L, Inicio, Min);
		SelectionSortRec(L, Inicio + 1, Fim);		
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
        //Cria??o do vetor auxiliar
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
        			cout << "\nJ? processou vetor esquerdo (A). Copiando vetor direito (B)";
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
	        			cout << "\nJ? processou vetor direito (B). Copiando vetor esquerdo (A)";
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

void QuickSort(Lista *L, int Inicio, int Fim){
    int Pivo, ContIni, ContFim;

    if (Inicio < Fim){
    	Pivo = Inicio;	//sempre será o primeiro elemento (nessa implementação!!)
        ContIni = Inicio;        
        ContFim = Fim + 1;
        
        do{ //CONQUISTAR: fazer com que o pivô separe menores antes da posição dele e maiiores depois dele
        	do{ //Fim pro início: busca o primeiro item menor que o pivô
                ContFim--;
            }
            while (L->Dados[ContFim].Chave > L->Dados[Pivo].Chave
            	&& ContFim > Pivo);
            	
            //Faz a troca		
			if (ContFim > Pivo){
                Swap(L, Pivo, ContFim);
                Pivo = ContFim;
            }
            
            do{ //Início pro fim: busca o primeiro maior que o piv?
                ContIni++;            
            } while (L->Dados[ContIni].Chave < L->Dados[Pivo].Chave && ContIni < Pivo);
            
            //Faz a troca		
			if (ContFim > Pivo){
                Swap(L, ContIni, Pivo);
                Pivo = ContIni;
            }
        } while (ContIni < ContFim);
		
		//DIVIDIR: chamar o quicksort para os intervalos anterior e posterior relativos ao pivô
		QuickSort(L, Inicio, Pivo-1);
    	QuickSort(L, Pivo+1, Fim);
	}
}

Lista L;
clock_t Tempo;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	Ini_Lista(&L);
	
	CarregaLista(&L);

	cout << "Vetor não ordenado:"<<endl;
	Imprimir(&L);
	
	Tempo = clock();
	
	//Execu??o da ordena??o
	//SelectionSort(&L, 0, MAX-1);
	//SelectionSortRec(&L, 0, MAX-1);
	//InsertionSort(&L, 0, MAX-1);
	//BubbleSort(&L, 0, MAX-1);
	//MergeSort(&L, 0, MAX-1, 1);
	QuickSort(&L, 0, MAX-1);
	
	Tempo = clock() - Tempo;//tempo decorrido!!
	cout << endl << endl<<"Vetor ordenado:"<<endl;
	Imprimir(&L);
	
	cout << endl << endl << "Tempo de Ordena??o: " << ((double) Tempo)/((CLOCKS_PER_SEC/1000)) << " milisegundos.";
	
	return 0;
}
