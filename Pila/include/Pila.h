#ifndef PILA_H
#define PILA_H
#include "Nodo.h"


class Pila
{
    public:
        Pila();
        void push(int value);
        Nodo * pop();
        void visitPila();
        Nodo * getHead();
        void setHead(Nodo * nodo);


    protected:

    private:
        Nodo * head;
};

#endif // PILA_H
