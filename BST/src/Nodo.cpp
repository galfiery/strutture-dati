#include "Nodo.h"

Nodo::Nodo(int value)
{
    this->value = value;
    this->father = nullptr;
    this->left = nullptr;
    this->right = nullptr;
}

void Nodo::setValue(int value)
{
    this->value = value;
}

int Nodo::getValue()
{
    return this->value;
}

void Nodo::setFather(Nodo * father)
{
    this->father = father;
}

Nodo * Nodo::getFather()
{
    return this->father;
}

void Nodo::setLeft(Nodo * left)
{
    this->left = left;
}

Nodo * Nodo::getLeft()
{
    return this->left;
}

void Nodo::setRight(Nodo * right)
{
    this->right = right;
}

Nodo * Nodo::getRight()
{
    return this->right;
}
