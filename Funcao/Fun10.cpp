#include <iostream>

using namespace std;


int CalcDobro(int Valor){
	int NumDobro;
	NumDobro = Valor * 2;
	
	return NumDobro;
}

int n1, n2, n3;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o primeiro nÃºmero inteiro: ";
	cin >> n1;
	
	cout << "Insira o segundo nÃºmero inteiro: ";
	cin >> n2;
	
	cout << "Insira o terceiro nÃºmero inteiro: ";
	cin >> n3;
	
	cout << endl << "Dobro do primeiro: " << CalcDobro(n1) << endl <<
	"Dobro do segundo: " << CalcDobro(n2) << endl <<
	"Dobro do terceiro: " << CalcDobro(n3);
	
	return 0;
}