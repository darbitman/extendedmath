#include "Bag.h"


int main() {
    Bag<unsigned int> b;
    b.add(12);
    b.add(15);
    b.add(111);
    b.~Bag();
    return 0;
}