#include <iostream>
#include "Stack.h"
using namespace std;

void TowerofHanoi(int n, Stack& source, Stack& auxiliary, Stack& destination) {
    if (n == 1) {
        if (!source.isEmpty()) { 
            int top = source.pop();
            destination.push(top);
        }
    } else {
        TowerofHanoi(n - 1, source, destination, auxiliary);
        if (!source.isEmpty()) { 
            int top = source.pop();
            destination.push(top);
        }
        TowerofHanoi(n - 1, auxiliary, source, destination);
    }
}


int main(){
    Stack source;
    Stack auxiliary;
    Stack destination;
    int n;
    cin >> n;

    // Push disks onto the source stack
    for (int i = n; i >= 1; i--) {
        source.push(i);
    }
    cout << "Before Source" << endl;
    source.print();
    cout << "Before Destination" << endl;
    destination.print();

    // Perform Tower of Hanoi algorithm
    TowerofHanoi(n, source, auxiliary, destination);
    cout << "After Source" << endl;
    source.print();
    cout << "After Destination" << endl;
    destination.print();
}
