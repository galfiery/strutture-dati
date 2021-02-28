#ifndef ALBERO_H
#define ALBERO_H
#include "Nodo.h"


class Albero
{
    public:
        Albero();
        void setRoot(Nodo * root);
        Nodo * getRoot();
        bool isEmpty();
        void insertNode(int value);
        Nodo * searchNode(int value);
        void preOrder(Nodo * nodo);
        void inOrder(Nodo * nodo);
        void postOrder(Nodo * nodo);

    protected:

    private:
        Nodo * root;
};

#endif // ALBERO_H
