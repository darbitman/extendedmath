#include "Stack.h"
#include <iostream>


int main() {
    Stack* s = new Stack();
    s->push(3);
    s->push(10);
    s->push(15);
    delete s;
    return 0;
}