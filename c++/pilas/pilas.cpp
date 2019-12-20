#include <iostream>

using namespace std;


struct nodo{
    int nodo;
    nodo* siguiente;
} *primero;

void insertarNodo();


int main(){




    return 0;
}


void insertarNodo(){
    nodo* nuevo = new nodo();
    cout<<"ingrese el valor que contendra el nuevo nodo ";
    cin>>nodo->dato;
    nuevo->siguiente = primero;
    primero = nuevo;
    cout<<endl<<" Nodo ingresado "<<endl<<endl;
}