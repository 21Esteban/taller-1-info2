//Ejercicio 17 .Escriba un programa que pida constantemente numeros hasta que se ingrese el numero 0 e imprima en pantalla el mayor de todos
//los numeros ingresados .

/*Ejemplo
si se ingresan 1,2,3,0 se debe imprimir El numero mayor fue: 3
*/

#include <iostream>

using namespace std;

int main()
{
    int num=1;int numeroMayor;

    while(num!=0){
        cout<<"Ingrese un numero : "<<endl;
        cin>>num;

        if(num>numeroMayor){
            numeroMayor = num;
        }
    }

    cout<<"El numero mayor fue "<<numeroMayor;


    return 0;
}
