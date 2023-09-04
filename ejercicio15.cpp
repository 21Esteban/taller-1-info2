// ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
// Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
// El resultado de la sumatoria es: 6

#include<iostream>

using namespace std;

int main(){


    float acumulador = 0;
    float num=999;

    cout << "Ingrese varios numeros para sumarlos , cuando desee mirar la suma digite el numero 0 (cero)"<< endl;


    while(num != 0){

        num = 0;

       cin >> num;

       acumulador = acumulador + num;

    }

    cout <<"La suma total de todos los numeros es : "<< acumulador << endl;

    return 0;
}