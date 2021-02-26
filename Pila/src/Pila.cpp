#include "Pila.h"
#include "Nodo.h"

Pila::Pila()
{
    this->head = nullptr;
}

void Pila::push(int value)
{
    Nodo * newNodo = new Nodo(value);
    newNodo->setNext(this->getHead());
    this->setHead(newNodo);
}

void Pila::setHead(Nodo * nodo)
{
    this->head = nodo;
}

Nodo * Pila::getHead()
{
    return this->head;
}

Nodo * Pila::pop()
{
    Nodo * head = this->getHead();
    Nodo * newHead = head->getNext();
    if (newHead != nullptr) {
        this->setHead(newHead);
    } else {
        this->setHead(nullptr);
    }
    return head;
}

void Pila::visitPila()
{
    Nodo * node = this->getHead();
    while (node != nullptr) {
        node->printValue();
        node = node->getNext();
    }
}
