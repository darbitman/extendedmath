#include "stdafx.h"
#include <iostream>
#include "ExtendedInteger.h"

using namespace std;

int main() {
    uextint128_t a("1234");
    cout << a;
    uextint256_t b(12);
    return 0;
}
