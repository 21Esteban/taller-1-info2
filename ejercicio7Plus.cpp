// Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
// los números entre 0 y N (incluyéndose el mismo).
// Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
// La sumatoria desde 0 hasta 5 es: 15

#include<iostream>

using namespace std;

int main(){
    //Este algoritmo me va a permitir hacer una suma parcial de N numeros de una sucesion teniendo el primer elemento y la diferencia entre ellos .
    float n,a,d;

    cout<<"Ingrese la cantidad de elementos que desea sumar :"<<endl;cin>>n;
    cout<<"Ingrese el primer elemento de la sucesion aritmetica:"<<endl;cin>>a;
    cout<<"Ingrese la diferencia de la sucesion aritmetica:"<<endl;cin>>d;



    // float sumaParcial = (n / 2) * ((2 * a) + (n - 1) * d);

    //por alguna razon en c++ no funciona la operacion pero en otros lenguajes como python si funciona.


     float divisionNpor2 = (n / 2) ;
     float dosVecesA= 2*a;
     float nMenosUno = n-1;


    float sumaParcial2= divisionNpor2 *((dosVecesA + nMenosUno)*d ); 

    cout<<sumaParcial2<<endl;

    return 0;

    //Este algoritmo es mucho mas eficiente que el otro ya que no tiene iteraciones o bucles
}