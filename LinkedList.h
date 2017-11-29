#ifndef TECMFS_LINKEDLIST_H
#define TECMFS_LINKEDLIST_H

#include "LLNode.h"

template<class T> class LinkedList{
public:
    int size = 0;
    LLNode<T>* first;
    LLNode<T>*  last;

    LinkedList(){
        this->first = nullptr;
        this->last  = nullptr;
        this->size  = 0;
    }

    void addLast(T add){
        if (this->size == 0){       //Si la lista está vacía
            this->first = new LLNode<T>;
            first->data = add;
            this->last = this->first;
        }
        else{
            LLNode<T>* current = this->first;

            for (int i = 0; i < this->size-1; i++){
                current = current->next;
            }
            current->next = new LLNode<T>;
            current->next->data = add;
            this->last = current->next;
        }
        this->size++;
    }

    void remove(LLNode<T>* remove){
        LLNode<T>* current = this->first;
        LLNode<T>* previous = nullptr;

        if (current->next){
            while (current->next && current != remove){
                previous = current;
                current = current->next;
            }
            if (previous){
                previous->next = current->next;
                delete current;
                this->size--;
            }
            else{
                this->first = current->next;
                delete current;
                this->size--;
            }
        }
        else{
            this->first = nullptr;
            this->last = nullptr;
            delete current;
            this->size--;
        }
    }
};


#endif //TECMFS_LINKEDLIST_H
