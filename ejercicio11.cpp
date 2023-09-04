// ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.
// Ej: si se ingresa 7 se debe imprimir:
// 1x7=7

#include<iostream>

using namespace std;

int main(){
    int n ;

    cout << "Ingrese el numero que desea ver su tabla de multiplicar : "<<endl;cin>>n;

   int operacion = 0;

    for (int i = 0; i <= 10; i++){

        operacion = n * i;
        
        cout <<i<<" x "<<n<<" = "<< operacion<<endl;

    }



    return 0;
}