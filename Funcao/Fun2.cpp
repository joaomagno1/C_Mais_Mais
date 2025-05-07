#include <iostream>

using namespace std;


float VerificarValor(float Num){
	int N;
	N=2;
	
	if (Num >= 0 && Num <= 10){
		N = 0;
	} else {
		N = 1;
	}
	
	return N;
}

float Num;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira um número: ";
	cin >> Num;
	
	cout << endl << VerificarValor(Num);
	
	return 0;
}