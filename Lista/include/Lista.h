#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"


class Lista
{
    public:
        Lista();
        void insert(int value);
        void visitList();
        virtual ~Lista();

    protected:

    private:
        Nodo * head;
        int dim;
};

#endif // LISTA_H
