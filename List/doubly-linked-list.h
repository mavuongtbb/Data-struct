#ifndef LIST_H
#define LIST_H

#include "node.h"
#include <iostream>

using namespace std;

template <class T>

class List
{
private:
    Node<T> *head;
    Node<T> *tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }
    T Get(int pos) const {
        Node<T>* p = head;
        for(int i = 0; i < pos; i++){
            p = p->next;
        }
        return p->data;
    }
    void Add(T value){
        Node<T>* n = new Node<T>;
        n->data = value;
        n->next = NULL;
        if(head == NULL)
            head = n;
            tail = n;
        else{
            tail->next = n;
            tail = n;
        }
    }
    void Delete(int pos){
        if(pos == 0)
            head = head->next;
        else{
            Node<T>* p = head;
            for(int i=0; i<pos-1; i++)
                p = p->next;
            p->next = p->next->next;
        }
    }
    void PrintAll() const {
        Node<T>* p = head;
        while(p != NULL){
            cout << p->data << " ";
            p = p->next;
        }
    }
    void Insert(T value, int pos) {
        Node<T>* n = new Node<T>;
        n->data = value;
        if(pos == 0){
            n->next = head;
            head = n;
        }
        else{
            Node<T>* ptr = head;
            for(int i=0; i<pos-1; i++)
                ptr = ptr->next;
            n->next = ptr->next;
            ptr->next = n;
        }
    }
    void Update(T value, int pos){
        Node<T>* p = head;
        for(int i=0; i<pos; i++)
            p = p->next;
        p->data = value;
    }
};

#endif