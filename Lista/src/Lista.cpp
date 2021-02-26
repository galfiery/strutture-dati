#include "Lista.h"
#include "Nodo.h"

Lista::Lista()
{
    this->head = nullptr;
    this->dim = 0;
}

void Lista::insert(int value)
{
    Nodo * newNode = new Nodo(value);
    newNode->setNext(this->head);
    this->head = newNode;
    this->dim++;
}

void Lista::visitList()
{
    Nodo * node = this->head;
    for (int i = 0; i < this->dim; i++) {
        node->printValue();
        node = node->getNext();
    }
}

Lista::~Lista()
{
    //dtor
}
