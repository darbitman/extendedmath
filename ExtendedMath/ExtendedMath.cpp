#include "stdafx.h"
#include <iostream>
#include "UnsignedExtendedInt.h"

using namespace std;

int main() {
    UnsignedExtendedInt<_extint128_t>* x = new UnsignedExtendedInt("9");
    //UnsignedExtendedInt* y = new UnsignedExtendedInt("5");
    //UnsignedExtendedInt* z = new UnsignedExtendedInt(*x % *y);
    return 0;
}
