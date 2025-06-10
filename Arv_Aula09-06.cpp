#include <iostream>

//João Victor Magno

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
	No *Item;

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
		if (Arv->Raiz == NULL){//?rvore Vazia
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
	
	if (NoArv != NULL){		//pr?-ordem
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

No* BuscaPai(No* NoArv, int ValorNum){
	No* Ret;
	
	if (NoArv == NULL){
		Ret = NULL; 
	}
	else{
		if (ValorNum == NoArv->ValorNum){
			//cout << endl << "J? existe: " << NoArv->ValorNum;
			Ret = NULL; //Encontrou
		}
		else{
			if (ValorNum > NoArv->ValorNum&&NoArv->Dir == NULL ||
				ValorNum < NoArv->ValorNum&&NoArv->Esq == NULL){
					//cout << endl << "Achei o pai: " << NoArv->ValorNum;
					Ret = NoArv;
			}
			else{
				if(ValorNum > NoArv->ValorNum){
					//cout << endl << "Indo pra direita: " << NoArv->ValorNum;
					Ret = BuscaPai(NoArv->Dir, ValorNum);			
				}
				else{
					//cout << endl << "Indo pra esquerda: " << NoArv->ValorNum;
					Ret = BuscaPai(NoArv->Esq, ValorNum);			
				}
			}
		}
	}	
	return Ret;
}

No* InsereNoArvOrd(Arvore* Arv, int ValorNum, string ValorTexto){
	No *Item, *NoPai;

	//Aloca espa?o, grava os dados e retorna o ponteiro pro elemento	
	if (Arv->Raiz == NULL){//?rvore Vazia
		Item = CriaNo(ValorNum, ValorTexto);
		Arv->Raiz = Item;
	}	
	else{
		NoPai = BuscaPai(Arv->Raiz, ValorNum);	
		if (NoPai != NULL){
			Item = CriaNo(ValorNum, ValorTexto);
			if (ValorNum < NoPai->ValorNum){				
				NoPai->Esq = Item;	
			}
			else{
				NoPai->Dir = Item;
			}							
		}
	}
	if (Item != NULL){
		Arv->TotalElem++;
	}
	return Item;
}

No* InsereNoArvOrdRec(Arvore* Arv, No* NoArv, int ValorNum, string ValorTexto){
	No *Ret, *Item;
	
	if (Arv->Raiz == NULL){//Árvore Vazia
		Item = CriaNo(ValorNum, ValorTexto);
		Arv->Raiz = Item;
		Arv->TotalElem++;
		Ret = Item;
	}
	return Ret;
}

Arvore Arv;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	Ini_Arvore(&Arv);
	
	/*
	InsereNoArvOrd(&Arv, 6, "6");
	InsereNoArvOrd(&Arv, 5, "5");
	InsereNoArvOrd(&Arv, 1, "1");
	InsereNoArvOrd(&Arv, 4, "4");
	InsereNoArvOrd(&Arv, 3, "3");
	InsereNoArvOrd(&Arv, 8, "8");
	InsereNoArvOrd(&Arv, 2, "2");
	InsereNoArvOrd(&Arv, 9, "1");
	InsereNoArvOrd(&Arv, 10, "A");
	InsereNoArvOrd(&Arv, 9, "9");
	InsereNoArvOrd(&Arv, 10, "B");
	InsereNoArvOrd(&Arv, 12, "C");
	*/
	
	InsereNoArvOrdRec(&Arv, NULL, 6, "6");
	
	if(Arv.Raiz != NULL){
		cout << "Pré-Ordem:" << "\n";
		//6, 5, 4, 2, 1, 3, 8, 7, B, A, 9, C
		ImprimeArvore(Arv.Raiz, "PRE", 'T');
		cout << "\n";
		
		//1, 2, 3, 
		cout << "\n" << "Ordem-Central:" << "\n";	
		ImprimeArvore(Arv.Raiz, "CEN", 'T');
		cout << "\n";
		
		//1, 3, 2, 4, 5, 7, 9, 10, 12, 11, 8, 6
		cout << "\n" << "Pos-Ordem:" << "\n";
		ImprimeArvore(Arv.Raiz, "POS", 'T');
		cout << "\n";
		
	}
	
	
	return 0;
}
