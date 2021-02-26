#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo(int value);
        void setNext(Nodo * next);
        Nodo * getNext();
        void printValue();
        virtual ~Nodo();

    protected:

    private:
        int value;
        Nodo * next;
};

#endif // NODO_H
