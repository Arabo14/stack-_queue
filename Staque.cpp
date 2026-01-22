#include "Staque.h"
#include <iostream>

using namespace std;

// Constructor
Staque::Staque() : head(nullptr), tail(nullptr) {}

// Copy constructor (deep copy)
Staque::Staque(const Staque& src) : head(nullptr), tail(nullptr) {
    Node* temp = src.head;
    while (temp) {
        push(temp->value);
        temp = temp->next;
    }
}

// Destructor
Staque::~Staque() {
    clear();
}

// Assignment operator (deep copy)
Staque& Staque::operator=(const Staque& src) {
    if (this == &src) return *this;
    clear();
    Node* temp = src.head;
    while (temp) {
        push(temp->value);
        temp = temp->next;
    }
    return *this;
}

// Insert based on parity: even -> head, odd -> tail
void Staque::push(int num) {
    Node* newNode = new Node(num);

    if (num % 2 == 0) { // even at head
        newNode->next = head;
        if (head) head->previous = newNode;
        head = newNode;
        if (!tail) tail = head;
    } else { // odd at tail
        newNode->previous = tail;
        if (tail) tail->next = newNode;
        tail = newNode;
        if (!head) head = tail;
    }
}

// Display contents
void Staque::show() const {
    Node* temp = head;
    cout << "(Head) ";
    while (temp) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "(Tail)" << endl;
}

// Remove one element from head
void Staque::popFront() {
    if (!head) return;

    Node* toDelete = head;
    head = head->next;

    if (head) head->previous = nullptr;
    else tail = nullptr;

    delete toDelete;
}

// Remove one element from tail
void Staque::popBack() {
    if (!tail) return;

    Node* toDelete = tail;
    tail = tail->previous;

    if (tail) tail->next = nullptr;
    else head = nullptr;

    delete toDelete;
}

// Remove specified count of even or odd elements
// isOdd = false -> remove evens from front
// isOdd = true  -> remove odds from back
void Staque::pop(int quantity, bool isOdd) {
    while (quantity > 0) {
        if (!head || !tail) break;

        if (isOdd) {
            if (tail->value % 2 != 0) {
                popBack();
                quantity--;
            } else {
                break;
            }
        } else {
            if (head->value % 2 == 0) {
                popFront();
                quantity--;
            } else {
                break;
            }
        }
    }
}

// Clear all nodes
void Staque::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}
