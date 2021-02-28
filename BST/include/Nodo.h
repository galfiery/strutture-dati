#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo(int value);
        void setValue(int value);
        int getValue();
        void setFather(Nodo * father);
        Nodo * getFather();
        void setLeft(Nodo * left);
        Nodo * getLeft();
        void setRight(Nodo * right);
        Nodo * getRight();

    protected:

    private:
        int value;
        Nodo * father;
        Nodo * left;
        Nodo * right;
};

#endif // NODO_H
