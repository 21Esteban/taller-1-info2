// Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
// A/B con redondeo.
// Ej: si se ingresan 8 y 3 se debe imprimir:
// 8/3=3
// Si se ingresan 7 y 3 se debe imprimir:
// 7/3=2

#include<iostream>

using namespace std;

int main (){

    int A, B;

    cout<<"Digite un numero : " <<endl;cin>>A;
    cout<<"Digite otro numero : " <<endl;cin>>B;

    int divisionEntera = A/B;

    cout<<A<<"/"<<B<<"="<<divisionEntera<<endl;

    return 0;
}
