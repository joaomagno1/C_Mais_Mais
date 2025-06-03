#include <iostream>
#include <stdlib.h>

// João Victor Magno
using namespace std;

struct No{
	float ValorNum;
	string ValorTexto;
	No* Esq;
	No* Dir;
};

//header ou cabeçalho ou cabeça
struct Arvore{
	No* Raiz;		
	int TotalElem;
};

void Ini_Arvore(Arvore* Arv){
	Arv->Raiz = NULL;
	Arv->TotalElem = 0;
}

No* CriaNo(float ValorNum, string ValorTexto){
	No* Ret;

	Ret = new No;
	Ret->ValorNum = ValorNum;
	Ret->ValorTexto = ValorTexto;	
	Ret->Esq = NULL;	
	Ret->Dir = NULL;	

	return Ret;
}

No* InsereNoArv(Arvore* Arv, float ValorNum, string ValorTexto, No* NoPai, string TipoLig){
	No *Item, *Aux;

	//Aloca espa?o, grava os dados e retorna o ponteiro pro elemento	
	Item = CriaNo(ValorNum, ValorTexto);
	if (NoPai != NULL){// Se passou o pai, insere diretamente
		if (TipoLig == "E"){
			NoPai->Esq = Item;	
		}
		else{
			NoPai->Dir = Item;
		}				
	}
	else{	
		if (Arv->Raiz == NULL){//Árvore Vazia
			Arv->Raiz = Item;			
		}	
		else{
			Item = NULL; //Erro!!
		}			
	}

	if (Item != NULL){
		Arv->TotalElem++;
	}
	
	return Item;
}

void ImprimeArvore(No* NoArv, string Tipo, char TipoValor) {
	
	if (NoArv != NULL){		//pré-ordem
		if (Tipo == "PRE"){
			if (TipoValor == 'T'){
				cout << NoArv->ValorTexto << ", ";	
			}			
			else{
				cout << NoArv->ValorNum << ", ";	
			}
		}
				
		ImprimeArvore(NoArv->Esq, Tipo, TipoValor);						
		
		if (Tipo == "CEN"){ 
			if (TipoValor == 'T'){
				cout << NoArv->ValorTexto << ", ";	
			}			
			else{
				cout << NoArv->ValorNum << ", ";	
			}
		}
		
		ImprimeArvore(NoArv->Dir, Tipo, TipoValor);		

		if (Tipo == "POS"){
			if (TipoValor == 'T'){
				cout << NoArv->ValorTexto << ", ";	
			}			
			else{
				cout << NoArv->ValorNum << ", ";	
			}
		}
	}
}

int Altura(No* NoArv){
	int Ret, AltDir, AltEsq;
	
	if (NoArv != NULL){
		AltEsq = Altura(NoArv->Esq);
		AltDir = Altura(NoArv->Dir);
		
		if (AltEsq > AltDir){
			Ret = AltEsq + 1;
		}
		else{
			Ret = AltDir + 1;
		}
	}
	else{
		Ret = -1;
	}
	return Ret;
}

Arvore Arv;
No *Item, *ItemD, *ItemE;
int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	/*
//	Arvore Apresentação:
	Ini_Arvore(&Arv);
	Item = InsereNoArv(&Arv, 1, "1", NULL, ""); //raiz
	ItemE = InsereNoArv(&Arv, 2, "2", Item, "E");
	ItemD = InsereNoArv(&Arv, 3, "3", Item, "D");
	
	//Lado Esquerdo
	Item = InsereNoArv(&Arv, 4, "4", ItemE, "E");
	ItemE = InsereNoArv(&Arv, 7, "7", Item, "E");
	InsereNoArv(&Arv, 10, "A", ItemE, "E");
	InsereNoArv(&Arv, 11, "B", ItemE, "D");
	
	//Lado Direito
	InsereNoArv(&Arv, 5, "5", ItemD, "E");
	Item = InsereNoArv(&Arv, 6, "6", ItemD, "D");
	ItemE = InsereNoArv(&Arv, 8, "8", Item, "E");
	InsereNoArv(&Arv, 9, "9", Item, "D");	
	InsereNoArv(&Arv, 12, "C", ItemE, "E");
	*/
	
//	Arvore da expressão matemática:
	Item = InsereNoArv(&Arv, 0, "*", NULL, "");
	
	InsereNoArv(&Arv, 5, "5", Item, "E");
	ItemD = InsereNoArv(&Arv, 0, "+", Item, "D");
	ItemE = InsereNoArv(&Arv, 0, "*", ItemD, "E");
	InsereNoArv(&Arv, 7, "7", ItemD, "D");
	Item = InsereNoArv(&Arv, 0, "+", ItemE, "E");
	ItemD = InsereNoArv(&Arv, 0, "*", ItemE, "D");
	InsereNoArv(&Arv, 9, "9", Item, "E");
	InsereNoArv(&Arv, 8, "8", Item, "D");
	InsereNoArv(&Arv, 4, "4", ItemD, "E");
	InsereNoArv(&Arv, 6, "6", ItemD, "D");
	
	if (Arv.Raiz != NULL){
		// 1 2 4 7 A B 3 5 6 8 C 9 - Pré-Ordem;
		// A 7 B 4 2 1 5 3 C 8 6 9 - Ordem-Central;
		// A B 7 4 2 5 C 8 9 6 3 1 - Pos-Ordem;
		/*
		cout << "Pré-Ordem:" << "\n";
		ImprimeArvore(Arv.Raiz, "PRE", 'T');
		cout << "\n";
		
		cout << "\n" << "Ordem-Central:" << "\n";	
		ImprimeArvore(Arv.Raiz, "CEN", 'T');
		cout << "\n";
		
		cout << "\n" << "Pos-Ordem:" << "\n";
		ImprimeArvore(Arv.Raiz, "POS", 'T');
		cout << "\n";	
		
		cout << "\n" << "Altura: " << Altura(Arv.Raiz->Dir);
		cout << "\n" << Arv.Raiz->Dir->Esq->ValorTexto;
		*/
//		5 9 8 + 4 6 * * 7 + *
		cout << "Expressão Matemática em Pos-ordém: " << "\n";		
		ImprimeArvore(Arv.Raiz, "POS", 'T');
	}
	
	
	return 0;
}
