#ifndef NODE_H
#define NODE_H

class Node {
public:
    int value;
    Node* next;
    Node* previous;

    explicit Node(int v) : value(v), next(nullptr), previous(nullptr) {}
};

#endif
