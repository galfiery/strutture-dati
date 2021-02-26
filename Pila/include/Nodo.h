#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo(int value);
        void printValue();
        void setNext(Nodo * next);
        Nodo * getNext();

    protected:

    private:
        int value;
        Nodo * next;
};

#endif // NODO_H
