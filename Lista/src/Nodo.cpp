#include "Nodo.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Nodo::Nodo(int newValue)
{
    this->value = newValue;
    this->next = nullptr;
}

void Nodo::setNext(Nodo * next)
{
    this->next = next;
}

Nodo * Nodo::getNext() {
    return this->next;
}

void Nodo::printValue()
{
    cout << this->value << endl;
}

Nodo::~Nodo()
{
    //dtor
}
