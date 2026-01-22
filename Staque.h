#ifndef STAQUE_H
#define STAQUE_H

#include "Node.h"

class Staque {
private:
    Node* head;
    Node* tail;

    void popFront();
    void popBack();

public:
    Staque();
    Staque(const Staque& src);
    ~Staque();

    Staque& operator=(const Staque& src);

    void push(int num);
    void pop(int quantity, bool isOdd);
    void show() const;
    void clear();
};

#endif
