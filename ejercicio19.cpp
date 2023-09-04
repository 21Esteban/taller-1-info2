/*
Escriba un programa  que pida un numero N e imprima si es o no un numero primo.
Ejemplo:si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir :
8 NO es un numero primo
*/
#include <iostream>

using namespace std;

int main()
{
    int num;int contador;

    //Voy a tener un contador de veces en las que el modulo de un numero es 0 , si el contador es mayyor de 2 entonces el numero es divisible por mas
    //numeros a parte de el y el 1, entonces no es primo

    cout<<"Ingrese un numero : "<<endl;cin>>num;

    //voy a hacer un bucle en el que va a dividir el numero /i veces y dentro va a haber un condicional , si numero%i == 0 entonces a el contador se le
    //va a sumar uno , luego al final del todo vamos a comparar el contador con 2 , si es mayor entonces el numero no es primo

    for (int i=1;i<=num;i++){

        if(num%i == 0){
            contador++;
        }
    }

    if(contador > 2){
        cout<< num<<" NO es un numero primo"<<endl;
    }else{
        cout<< num<<" Es un numero primo "<<endl;
    }

    return 0;
}
