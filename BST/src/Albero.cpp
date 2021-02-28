#include "Albero.h"
#include "Nodo.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Albero::Albero()
{
    this->root = nullptr;
}

void Albero::setRoot(Nodo * root)
{
    this->root = root;
}

Nodo * Albero::getRoot()
{
    return this->root;
}


bool Albero::isEmpty()
{
    return this->getRoot() == nullptr ? true : false;
}

void Albero::insertNode(int value)
{
    Nodo * newNode = new Nodo(value);
    if (this->isEmpty()) {
        this->setRoot(newNode);
    } else {
        Nodo * aux = this->getRoot();
        Nodo * auxn = nullptr;
        while (aux != nullptr) {
            auxn = aux;
            if (value < aux->getValue()) {
                aux = aux->getLeft();
            } else {
                aux = aux->getRight();
            }
        }
        newNode->setFather(auxn);
        if (value <= auxn->getValue()) {
            auxn->setLeft(newNode);
        } else {
            auxn->setRight(newNode);
        }
    }
}

Nodo * Albero::searchNode(int value)
{
    if (this->isEmpty()) {
        return nullptr;
    } else {
        Nodo * aux = root;
        while(aux != nullptr && aux->getValue() != value) {
            if (aux->getValue() >= value) {
                aux = aux->getLeft();
            } else {
                aux = aux->getRight();
            }
        }
        return aux;
    }
}

void Albero::preOrder(Nodo * nodo)
{
    if (nodo != nullptr) {
        cout << nodo->getValue() << " ";
        this->preOrder(nodo->getLeft());
        this->preOrder(nodo->getRight());
    }
}

void Albero::inOrder(Nodo * nodo)
{
    if (nodo != nullptr) {
        this->inOrder(nodo->getLeft());
        cout << nodo->getValue() << " ";
        this->inOrder(nodo->getRight());
    }
}

void Albero::postOrder(Nodo * nodo)
{
    if (nodo != nullptr) {
        this->postOrder(nodo->getLeft());
        this->postOrder(nodo->getRight());
        cout << nodo->getValue() << " ";
    }
}
