#include <iostream>
#include "Staque.h"

using namespace std;

int main() {
    Staque stq;
    int n, element;

    cout << "Enter the number of elements to add to the Staque: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        stq.push(element);
    }

    cout << "\nStaque after insertion: ";
    stq.show();

    int evenToRemove, oddToRemove;
    cout << "\nEnter the number of even elements to remove: ";
    cin >> evenToRemove;
    cout << "Enter the number of odd elements to remove: ";
    cin >> oddToRemove;

    stq.pop(evenToRemove, false); // remove evens from front
    stq.pop(oddToRemove, true);   // remove odds from back

    cout << "\nStaque after removal operations: ";
    stq.show();

    return 0;
}
