#include <iostream>
#include <cstdlib>
#include "Pila.h"
#include "Nodo.h"
using namespace std;

int main()
{
    Pila * p1 = new Pila();
    p1->push(8);
    p1->push(3);
    p1->push(4);
    p1->push(24);
    p1->push(7);
    p1->pop();
    p1->pop();
    p1->push(2);
    p1->visitPila();
}
