#include "stdafx.h"
#include <iostream>
#include "ExtendedInteger.h"

using namespace std;

int main() {
    uextint128_t a(109);
    extint128_t b(a);
    cout << b;
    while (1);
    return 0;
}
