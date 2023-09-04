// Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
// Ej: si se ingresa 4 se debe imprimir:
// Los divisores de n son:
// 1
// 2
// 4

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese un numero para ver sus divisores : " << endl;
    cin >> n;

    cout << "Los divisores de " << n << " son: " << endl;

    for (int i = 1; i < n; i++)
    {
       float operacion  = 0 ;

       cout<< i <<endl;

       cout << n "hola"<<endl;

         operacion = n % i;

        if (operacion == 0)
        {

            cout << operacion;
        }

        return 0;
    }
}