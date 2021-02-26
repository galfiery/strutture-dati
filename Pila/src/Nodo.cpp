#include "Nodo.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Nodo::Nodo(int value)
{
    this->value = value;
    this->next = nullptr;
}

void Nodo::printValue()
{
    cout << this->value << endl;
}

void Nodo::setNext(Nodo * next)
{
    this->next = next;
}

Nodo * Nodo::getNext()
{
    return this->next;
}
