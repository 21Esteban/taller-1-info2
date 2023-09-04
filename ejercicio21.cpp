/*
Escriba un programa que pida un caracter C , si es una letra la debe convertir de mayuscula a minuscula y viceversa e imprimirla .
Ejemplo :  si se ingresa B se debe imprimir la letra convertida b
y si se ingresa k se debe imrpimir la letra convertida K
*/
#include <iostream>

using namespace std;

int main()
{
    //El planteamiento de este problrma es un poco complicado , no voy a pensar tanto en la eficiencia sino en cumplir con el algoritmo , una
    //idea que tengo es tener un tener un arreglo o un diccionario , pero no lo hemos visto , entonces no se si pueda realizarlo asi , entonces
    //mejor voy a hacer 2 variables , cada una va a ser de tipo string y va a tener las letras en el orden alfabetico , una variable para las
    //mayusculas y otra para las minusculas , la idea de esto es que cuando nos ingresen la letra , vamos a recorrer con un bucle cada uno de los
    //elementos del string y cuando lo encontremos , vamos a guardar su indice , al tener su indice , este va a ser correspondiente o el mismo
    //a el indice de la letra mayuscula en la otra variable, y ahi ya podemos devolver la letra
    
    char abcMinusculas[27] = "abcdefghijklmnopqrstuvwxyz";
    
    char abcMayusculas[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char letra= "";
    
    
    
    return 0;
}
