// Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
// Ej: si se ingresan 7 y 3 se debe imprimir:
// El mayor es 7

#include<iostream>

using namespace std;

int main(){

    int A, B;

    cout << "ingrese un numero" << endl;cin >> A;
    cout << "Ingrese otro numero" << endl;cin >> B;

    if(A > B) {
        cout << "El "<< A <<" Es mayor"<< endl;
    }else{
        cout << "El "<< B <<" Es Mayor"<< endl;
    }

    return 0;
}