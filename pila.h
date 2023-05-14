 
#include "nodo.h"
class Pila{

    Nodo* tope;
    int tamano;

    public:
    Pila();
    bool empty();
    int  currentTope();
    void push(int dato);
    int pop();
    void printff();
    int clean();
    


};