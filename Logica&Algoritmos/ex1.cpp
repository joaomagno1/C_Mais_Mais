#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o primeiro número: ";  
    cin >> a;  

    cout << "Digite o segundo número: ";   
    cin >> b;  

    cout << "Digite o terceiro número: "; 
    cin >> c;  

    if (a >= b) {
        if (b >= c) {
            cout << a << ", " << b << ", " << c << endl;
        } 
        else {
            if (a >= c) {
                cout << a << ", " << c << ", " << b << endl;
            } 
            else {
                cout << c << ", " << a << ", " << b << endl;
            }
        }
    } 
    else {
        if (b >= c) {
            if (a >= c) {
                cout << b << ", " << a << ", " << c << endl;
            } 
            else {
                cout << b << ", " << c << ", " << a << endl;
            }
        } 
        else {
            cout << c << ", " << b << ", " << a << endl;
        }
    }

    return 0;
}



