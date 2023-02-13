#ifndef STACK_H
#define STACK_H

#include "node.h"
#include <iostream>

using namespace std;

template <class T>

class Queue
{
private:
    Node<T> *head;
    Node<T> *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }
    bool IsEmpty() const
    {
        return head == NULL;
    }
    void EnQueue(T value)
    {
        Node<T>* n = new Node<T>;
        n->data = value;
        if(IsEmpty()){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
    }
    T DeQueue()
    {
        Node<T> *p = head;
        T value = p->data;
        head = head->next;
        delete p;
        return value;
    }
    T GetTop() const
    {
        return head->data;
    }
};

#endif