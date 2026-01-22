# Staque Data Structure (C++)

This project implements a custom data structure called a **Staque** (stack + queue style behavior) using a **doubly linked list** in C++. Elements are inserted based on parity: **even numbers are pushed to the front (head)** and **odd numbers are pushed to the back (tail)**. The program supports displaying the structure, removing nodes from either end, and removing a specified number of even or odd elements based on user input.

## Features
- Doubly linked list implementation (`Node` with `next` and `previous`)
- `push(int)` places:
  - even values at the **head**
  - odd values at the **tail**
- `pop(quantity, isOdd)` removes:
  - evens from the **front** when `isOdd = false`
  - odds from the **back** when `isOdd = true`
- Includes Rule of Three:
  - Copy constructor
  - Assignment operator
  - Destructor (prevents memory leaks)

## Project Structure
- `Node.h` – Node definition for doubly linked list
- `Staque.h` – Staque class declaration
- `Staque.cpp` – Staque class implementation
- `main.cpp` – User input + demonstration program

## How to Compile and Run

### Compile
```bash
g++ main.cpp Staque.cpp -o staque
