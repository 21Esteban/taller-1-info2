// Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
// círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
// Ej: si se ingresa 1 se debe imprimir:
// Perimetro: 6.28352
// Area: 3.1416

#include<iostream>

using namespace std;

int main(){

    float PI = 3.1416;
    int N;
    float area;
    float perimetro;

    cout<<"Ingrese el Radio del circulo : "<<endl;
    cin>>N;

    area = PI * (N*N);
    perimetro = 2*PI*N;

    cout<<"Area : " <<area<<endl;
    cout<<"Perimetro : " <<perimetro<<endl;

    return 0;
}

