#include <iostream>
using namespace std;

int main () {
	setlocale (LC_ALL,"Portuguese");
    int tamanho = 15;
	int num[tamanho];
    int i;
	
	
	for(i=0; i<tamanho; i++){
		cout << "Digite um numero: ";
		cin >> num[i];
	}
    cout<<"Os numeros digitados pelo Usario foram iguais a 30 na(s) posição(ões): \n";
	for(i=0;i<tamanho;i++){
		if(num[i] == 30){
			cout << i << " ";
		}		}
		
	return 0;
}