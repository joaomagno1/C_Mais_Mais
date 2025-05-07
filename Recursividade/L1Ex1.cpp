#include <iostream>
#include <stdlib.h>

using namespace std;

float potencia(float base, float expoente){
	if (expoente == 0){
		return 1;
	}
	else {
		return base * potencia(base, expoente - 1);
	}
}

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	float a = 3, b = 7;
	
	float resultado = potencia(a, b);
	
	cout << a << "^" << b << "=" << resultado << "\n";
	
	return 0;
}