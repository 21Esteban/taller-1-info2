#include <iostream>

using namespace std;

int main()
{
    int numero = 1;int acumulador;

   // cout<<"Ingrese un numero : "<<endl; cin>>numero;




    //mientras que el numero que el usuario ingresa sea diferente de 0 entonces vamos a ir sumando a una variable

    while(numero != 0){
        numero = 0;
        cout<<"Ingrese un numero : "<<endl; cin>>numero;
        acumulador = acumulador + numero;

    }

    cout<<" El resultado de la sumatoria es:"<< acumulador<<endl;


    return 0;
}
