/*

Un puntero es una varible que contiene la direccion de memoria de otra variable.
La direccion de memoria se obtiene con el operador unario (&)

*/

#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int y = 2;

    //Declaracion de un puntero
    int *p;
    
    p = &x; 
    y = *p;
    *p = *p+3;

    cout<<"El valor del puntero es: "<<p<<endl;
    cout<<"El valor de X es: "<<x<<endl;
    cout<<"El valor de Y es: "<<y<<endl;

    return 0;

}



