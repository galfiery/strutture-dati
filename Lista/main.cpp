#include <iostream>
#include <Nodo.h>
#include <Lista.h>

using namespace std;

int main()
{
    Lista * l1 = new Lista();
    l1->insert(30);
    l1->insert(23);
    l1->insert(25);
    l1->visitList();
}
