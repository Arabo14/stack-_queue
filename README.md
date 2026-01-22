This code defines a custom integer-only data structure called Staque that stores even numbers at the front and
odd numbers at the back using a doubly linked list. The Staque provides insertion (push) and removal functions
(popFront, popBack, and pop), where elements are removed based on Last-In-First-Out (LIFO) principles.
Memory management is carefully handled through a destructor, copy constructor, and assignment operator to ensure 
deep copying and prevent memory leaks. The program’s main function interacts with the user, allowing them to input
a series of integers, display the current Staque, and specify counts of even and odd numbers to remove. The Staque 
is displayed both before and after the removals for clarity.
