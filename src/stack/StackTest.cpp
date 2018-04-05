#include "Stack.h"
#include <iostream>


int main() {
    Stack* s = new Stack();
    s->push(3);
    s->push(10);
    s->push(15);
    std::cout << s->pop() << std::endl;
    std::cout << s->pop() << std::endl;
    std::cout << s->pop() << std::endl;
    return 0;
}