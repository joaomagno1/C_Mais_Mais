#include <iostream>
#include <stdlib.h>

using namespace std;

int recursiva(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + recursiva(n - 1);
	}
}

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	int n, resultado;
	
	cout << "Insira o valor de n:" << "\n";
	
	cin >> n;
	
	resultado = recursiva(n);
	cout << "O valor da somatória de " << n << " é: " << resultado;
		
	return 0;
}