#ifndef STACK_H
#define STACK_H

#include "node.h"
#include <iostream>

using namespace std;

template <class T>

class Stack
{
private:
    Node<T> *top;

public:
    Stack()
    {
        top = NULL;
    }
    bool IsEmpty() const
    {
        return top == NULL;
    }
    void Push(T value)
    {
        Node<T>* n = new Node<T>;
        n->data = value;
        n->next = top;
        top = n;
    }
    T Pop()
    {
        Node<T> *p = top;
        T value = p->data;
        top = top->next;
        delete p;
        return value;
    }
    T GetTop() const
    {
        return top->data;
    }
};

#endif