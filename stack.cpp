#include <iostream>

using namespace std;

struct Nodo{

    int INFO;
    Nodo *Sig;
};

//Declare variable of stack
struct Nodo *pila;
//Inicializar
void inicializar();
//Empty
bool empty();
//Full
//push
void push(int x);
//pop
int pop();
//imprimir
void imprimir();



int main(){

    inicializar();
    push(1);
    push(2);
    push(3);
    push(4);

    imprimir();
    // int number = pop();
    // cout<<"Numero eliminado : "<<number;
    cout<<endl;
    imprimir();


    return 0;
}

void inicializar(){

    pila = NULL;
}

bool empty(){

    return pila == NULL;

}

void push(int x){

    Nodo *tope = new Nodo();
    tope -> INFO = x; 
    tope -> Sig = pila;
    pila = tope;


}

int pop(){

    if(empty())
    {
        cout<<"Pila Vacia"<<endl;
    } else {
        struct Nodo *aux = new Nodo();
        aux = pila;
         int temporal = aux ->INFO;
         pila = aux ->Sig;
         delete aux;
         return temporal;
    }
}

void imprimir(){
    if(!empty()){

    
    int i=0;
    struct Nodo *tope  = new Nodo();
    tope = pila;

    while (tope != NULL)
    {
        cout<<"Pila ["<<i<<"]"<<&tope->INFO<<endl;
        i++;
        tope = tope->Sig;
    }   
    }else{
        cout<<"Pila Vacia"<<endl;
    }
    
}