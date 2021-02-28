#include <iostream>
#include <cstdlib>
#include "Nodo.h"
#include "Albero.h"
using namespace std;

int main()
{
    int values[10] = {23, 8, 25, 9, 7, 24, 27, 30, 26, 31};
    Albero * b1 = new Albero();
    for (int i = 0; i < 10; i++) {
        b1->insertNode(values[i]);
    }
    cout << "Visita preorder" << endl;
    b1->preOrder(b1->getRoot());
    cout << endl;
    cout << "Visita inorder" << endl;
    b1->inOrder(b1->getRoot()),
    cout << endl;
    cout << "Visita postorder" << endl;
    b1->postOrder(b1->getRoot());
}
