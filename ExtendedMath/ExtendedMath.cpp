#include "stdafx.h"
#include <iostream>

#include "ExtendedInteger.h"


using namespace std;

int main() {
    uextint128_t a;
    uextint128_t b;
    a.setValueAtIndex(0x122, 0);
    b.setValueAtIndex(0x123, 0);
    a.setValueAtIndex(0x123, 1);
    cout << (a > b) << endl;
    return 0;
}
