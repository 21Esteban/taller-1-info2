// Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
// los números entre 0 y N (incluyéndose el mismo).
// Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
// La sumatoria desde 0 hasta 5 es: 15

#include<iostream>

using namespace std;

int main(){
    int i = 0;
    int sumador = 0;
    int num;

    cout << "Ingrese un numero para hacer la suma aritmetica : " << endl;
    cin>>num;

    while(i<=num){

        sumador = sumador + i;

        i++;
    }

    cout<<"La sumatoria desde o hasta "<< num <<" Es "<<sumador<<endl;

    return 0;
}